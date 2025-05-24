#include <stdio.h>
#include <stdlib.h>
#include "inc/image_handlers.h"

int main()
{
   int imgWidth, imgHeight, imgBitDepth;
   unsigned char imgHeader[BMP_HEADER_SIZE];
   unsigned char imgColorTable[BMP_COLOR_TABLE_SIZE];
   unsigned char imgBuffer[CUSTOM_IMG_SIZE];

   const char imgName[] ="images/man.bmp";
   const char newImgName[] ="images/man_copy.bmp";

   imageReader(imgName,&imgWidth,&imgHeight,&imgBitDepth,&imgHeader[0],&imgColorTable[0],&imgBuffer[0]);
   imageWriter(newImgName,imgHeader,imgColorTable,imgBuffer,imgBitDepth);

   printf("Success !\n");

    return 0;
}
