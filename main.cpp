#include <iostream>
#include <stdio.h>
#include <dlfcn.h>
#include <assert.h>
#include <gd.h>
#include "gd_protos.h"
#include "gd_stubs.h"

using namespace std;
//BGD_DECLARE(gdImagePtr) gdImageCreateFromJpeg (FILE * infile);

//typedef gdImagePtr (*_gdImageCreateFromJpeg)(FILE*);

int main()
{
#if 1
    gdLibrary gd;

    FILE* fp = fopen("image.jpg", "r");
    gdImagePtr image = gd.gdImageCreateFromJpeg( fp );
    fclose(fp);

    printf("image = %p width=%d height=%d\n", image, image->sx, image->sy);

    fp= fopen("copy.png", "w");

    gd.gdImagePng( image, fp );

    fclose(fp);

#else
    void* lib = 0L;
    _gdImageCreateFromJpeg gdImageCreateFromJpeg;

    cout << "Hello world!" << endl;

    lib = dlopen("libgd.so", RTLD_NOW);
    if (lib == 0) {
        printf("ERROR: %s\n", dlerror());
        return -1;
    }
    printf("lib = %p\n", lib);

    gdImageCreateFromJpeg = (_gdImageCreateFromJpeg)dlsym( lib, "gdImageCreateFromJpeg" );
    assert(gdImageCreateFromJpeg != 0);

    FILE* fp = fopen("image.jpg", "r");
    gdImagePtr image = gdImageCreateFromJpeg( fp );
    fclose(fp);

    printf("image = %p\n", image);

    dlclose( lib );
#endif

    return 0;
}
