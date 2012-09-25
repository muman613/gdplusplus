#include <iostream>
#include <stdio.h>
#include <dlfcn.h>
#include <assert.h>
#include <gd.h>


using namespace std;

typedef gdImagePtr (*_gdImageCreateFromJpeg)(FILE*);

int main(int argc, const char* argv[]) {
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

    return 0;
}
