#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv) 
{
    // Open the input BMP file in binary read mode
    FILE *streamIn = fopen("images/cameraman.bmp", "rb");

    // Open the output BMP file in binary write mode
    FILE *fo = fopen("images/cameraman_copy.bmp", "wb");

    // Check if input file opened successfully
    if (streamIn == (FILE*)0)
    {
        printf("Unable to open file\n");
        return 1;
    }

    // Declare arrays for BMP header and color table
    unsigned char header[54];         // BMP header is always 54 bytes
    unsigned char colorTable[1024];   // Color table (used in <=8 bit images)

    // Read the 54-byte BMP header
    for (int i = 0; i < 54; i++)
    {
        header[i] = getc(streamIn);
    }

    // Extract width, height, and bit depth from BMP header
    int width = *(int *)&header[18];      // Bytes 18–21: image width
    int height = *(int *)&header[22];     // Bytes 22–25: image height
    int bitDepth = *(int *)&header[28];   // Bytes 28–29: bit depth (bits per pixel)

    // If bit depth is 8 or less, read the color palette (1024 bytes for 256 colors)
    if (bitDepth <= 8)
    {
        fread(colorTable, sizeof(unsigned char), 1024, streamIn);
    }

    // Write the header to the output BMP file
    fwrite(header, sizeof(unsigned char), 54, fo);

    // Allocate a buffer to hold the image pixel data
    unsigned char buf[height * width];

    // Read pixel data from the input file into the buffer
    fread(buf, sizeof(unsigned char), (height * width), streamIn);

    // If color table was used, write it to the output file
    if (bitDepth <= 8)
    {
        fwrite(colorTable, sizeof(unsigned char), 1024, fo);
    }

    // Write the pixel data buffer to the output BMP file
    fwrite(buf, sizeof(unsigned char), (height * width), fo);

    // Close both input and output files
    fclose(fo);
    fclose(streamIn);

    // Output success message and image metadata
    printf("Success!\n");
    printf("Width : %d\n", width);
    printf("Height : %d\n", height);

    return 0;
}
