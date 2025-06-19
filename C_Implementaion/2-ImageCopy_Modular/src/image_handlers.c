#include "inc/image_handlers.h" 

/**
 * Reads a BMP image file and extracts the header, color table (if needed), and pixel data.
 */
void imageReader(const char *imgName,
                 int *_height,
                 int *_width,
                 int *_bitDepth,
                 unsigned char *_header,
                 unsigned char *_colorTable,
                 unsigned char *_buf)
{
    FILE *streamIn = fopen(imgName, "rb");

    // Safety check: ensure the file exists and is readable
    if (streamIn == NULL)
    {
        fprintf(stderr, "Error: Unable to open image file '%s'\n", imgName);
        exit(EXIT_FAILURE);  // Exit if file cannot be opened
    }

    // Read the BMP header (54 bytes)
    for (int i = 0; i < BMP_HEADER_SIZE; i++)
    {
        _header[i] = getc(streamIn);
    }

    // Extract image metadata from the header
    *_width    = *(int *)&_header[18];  // Image width
    *_height   = *(int *)&_header[22];  // Image height
    *_bitDepth = *(int *)&_header[28];  // Bits per pixel (bit depth)

    // If the image uses a color palette (<= 8-bit), read the color table
    if (*_bitDepth <= 8)
    {
        fread(_colorTable, sizeof(unsigned char), BMP_COLOR_TABLE_SIZE, streamIn);
    }

    // Read pixel data into the buffer (assumes maximum size defined by CUSTOM_IMG_SIZE)
    fread(_buf, sizeof(unsigned char), CUSTOM_IMG_SIZE, streamIn);

    // Close the file after reading
    fclose(streamIn);
}

/**
 * Writes a BMP image to a file using the provided header, color table, and pixel buffer.
 */
void imageWriter(const char *imgName,
                 const unsigned char *header,
                 const unsigned char *colorTable,
                 const unsigned char *buf,
                 int bitDepth)
{
    FILE *fo = fopen(imgName, "wb");

    // Safety check: ensure the file can be created or opened
    if (fo == NULL)
    {
        fprintf(stderr, "Error: Unable to create output image file '%s'\n", imgName);
        exit(EXIT_FAILURE);
    }

    // Write the BMP header (54 bytes)
    fwrite(header, sizeof(unsigned char), BMP_HEADER_SIZE, fo);

    // If the image is <= 8-bit, write the color palette
    if (bitDepth <= 8)
    {
        fwrite(colorTable, sizeof(unsigned char), BMP_COLOR_TABLE_SIZE, fo);
    }

    // Write the pixel data buffer
    fwrite(buf, sizeof(unsigned char), CUSTOM_IMG_SIZE, fo);

    // Close the file after writing
    fclose(fo);
}
