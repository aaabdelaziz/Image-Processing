#ifndef IMAGE_HANDLERS_H
#define IMAGE_HANDLERS_H

#include <stdio.h>
#include <stdlib.h>

// Constants for BMP image processing
#define BMP_HEADER_SIZE         54                  // BMP file header size
#define BMP_COLOR_TABLE_SIZE    1024                // Color palette size (used in <=8-bit images)
#define CUSTOM_IMG_SIZE         (1024 * 1024)       // Estimated max image size (1MB buffer)

/**
 * Reads a BMP image file and extracts header, color table, and pixel data.
 * 
 * @param imgName      The path to the input BMP image file.
 * @param height       Pointer to store image height.
 * @param width        Pointer to store image width.
 * @param bitDepth     Pointer to store image bit depth.
 * @param header       Buffer to store the BMP header (54 bytes).
 * @param colorTable   Buffer to store the color table (1024 bytes).
 * @param buffer       Buffer to store pixel data (up to CUSTOM_IMG_SIZE).
 */
void imageReader(const char *imgName,
                 int *height,
                 int *width,
                 int *bitDepth,
                 unsigned char *header,
                 unsigned char *colorTable,
                 unsigned char *buffer);

void imageWriter(newImgName,imgHeader,imgColorTable,imgBuffer,imgBitDepth);

/**
 * Writes a BMP image file from given header, color table, and pixel data.
 * 
 * @param imgName      The path to the output BMP image file.
 * @param header       Pointer to the BMP header.
 * @param colorTable   Pointer to the color table (only used if bit depth <= 8).
 * @param buffer       Pointer to the image pixel buffer.
 * @param bitDepth     Bit depth of the i*
 */

 #endif