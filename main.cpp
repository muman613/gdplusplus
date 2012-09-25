#include <iostream>
#include <stdio.h>
#include <dlfcn.h>
#include <assert.h>
#include <gd.h>
#include "gd_protos.h"
#include "gd_stubs.h"

using namespace std;

/**
 *
 */

int main()
{
    gdLibrary gd;

    FILE* fp = fopen("image.jpg", "r");
    gdImagePtr image = gd.gdImageCreateFromJpeg( fp );
    fclose(fp);

    printf("image = %p width=%d height=%d\n", image, image->sx, image->sy);

    fp= fopen("copy.png", "w");

    gd.gdImagePng( image, fp );

    fclose(fp);

    return 0;
}
