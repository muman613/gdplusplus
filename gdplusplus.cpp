#include <gd.h>
#include <dlfcn.h>
#include "gd_protos.h"
#include "gdplusplus.h"

gdLibrary::gdLibrary()
:   m_isValid(false)
{
    // ctor
    m_lib = dlopen("libgd.so", RTLD_NOW);
    if (m_lib != 0) {
        m_isValid = true;
        printf("lib = %p\n", m_lib);
    } else {
        printf("ERROR: %s\n", dlerror());
        return;
    }

//    gdImageCreateFromJpeg = (_gdImageCreateFromJpeg)dlsym( m_lib, "gdImageCreateFromJpeg" );
    gdAlphaBlend            = (_gdAlphaBlend)dlsym( m_lib, "gdAlphaBlend" );
    gdImageCreate           = (_gdImageCreate)dlsym( m_lib, "gdImageCreate" );
    gdImageCreateTrueColor  = (_gdImageCreateTrueColor)dlsym( m_lib, "gdImageCreateTrueColor" );
    gdImageCreateFromPng    = (_gdImageCreateFromPng)dlsym( m_lib, "gdImageCreateFromPng" );
    gdImageCreateFromPngCtx = (_gdImageCreateFromPngCtx)dlsym( m_lib, "gdImageCreateFromPngCtx" );
    gdImageCreateFromPngPtr = (_gdImageCreateFromPngPtr)dlsym( m_lib, "gdImageCreateFromPngPtr" );
    gdImageCreateFromGif    = (_gdImageCreateFromGif)dlsym( m_lib, "gdImageCreateFromGif" );
    gdImageCreateFromGifCtx = (_gdImageCreateFromGifCtx)dlsym( m_lib, "gdImageCreateFromGifCtx" );
    gdImageCreateFromGifPtr = (_gdImageCreateFromGifPtr)dlsym( m_lib, "gdImageCreateFromGifPtr" );
    gdImageCreateFromWBMP   = (_gdImageCreateFromWBMP)dlsym( m_lib, "gdImageCreateFromWBMP" );
    gdImageCreateFromWBMPCtx = (_gdImageCreateFromWBMPCtx)dlsym( m_lib, "gdImageCreateFromWBMPCtx" );
    gdImageCreateFromWBMPPtr = (_gdImageCreateFromWBMPPtr)dlsym( m_lib, "gdImageCreateFromWBMPPtr" );
    gdImageCreateFromJpeg = (_gdImageCreateFromJpeg)dlsym( m_lib, "gdImageCreateFromJpeg" );
    gdImageCreateFromJpegCtx = (_gdImageCreateFromJpegCtx)dlsym( m_lib, "gdImageCreateFromJpegCtx" );
    gdImageCreateFromJpegPtr = (_gdImageCreateFromJpegPtr)dlsym( m_lib, "gdImageCreateFromJpegPtr" );
    gdImageCreateFromPngSource = (_gdImageCreateFromPngSource)dlsym( m_lib, "gdImageCreateFromPngSource" );
    gdImageCreateFromGd = (_gdImageCreateFromGd)dlsym( m_lib, "gdImageCreateFromGd" );
    gdImageCreateFromGdCtx = (_gdImageCreateFromGdCtx)dlsym( m_lib, "gdImageCreateFromGdCtx" );
    gdImageCreateFromGdPtr = (_gdImageCreateFromGdPtr)dlsym( m_lib, "gdImageCreateFromGdPtr" );
    gdImageCreateFromGd2 = (_gdImageCreateFromGd2)dlsym( m_lib, "gdImageCreateFromGd2" );
    gdImageCreateFromGd2Ctx = (_gdImageCreateFromGd2Ctx)dlsym( m_lib, "gdImageCreateFromGd2Ctx" );
    gdImageCreateFromGd2Ptr = (_gdImageCreateFromGd2Ptr)dlsym( m_lib, "gdImageCreateFromGd2Ptr" );
    gdImageCreateFromGd2Part = (_gdImageCreateFromGd2Part)dlsym( m_lib, "gdImageCreateFromGd2Part" );
    gdImageCreateFromGd2PartCtx = (_gdImageCreateFromGd2PartCtx)dlsym( m_lib, "gdImageCreateFromGd2PartCtx" );
    gdImageCreateFromGd2PartPtr = (_gdImageCreateFromGd2PartPtr)dlsym( m_lib, "gdImageCreateFromGd2PartPtr" );
    gdImageCreateFromXbm = (_gdImageCreateFromXbm)dlsym( m_lib, "gdImageCreateFromXbm" );
    gdImageCreateFromXpm = (_gdImageCreateFromXpm)dlsym( m_lib, "gdImageCreateFromXpm" );
    gdImageDestroy = (_gdImageDestroy)dlsym( m_lib, "gdImageDestroy" );
    gdImageSetPixel = (_gdImageSetPixel)dlsym( m_lib, "gdImageSetPixel" );
    gdImageGetPixel = (_gdImageGetPixel)dlsym( m_lib, "gdImageGetPixel" );
    gdImageGetTrueColorPixel = (_gdImageGetTrueColorPixel)dlsym( m_lib, "gdImageGetTrueColorPixel" );
    gdImageAABlend = (_gdImageAABlend)dlsym( m_lib, "gdImageAABlend" );
    gdImageLine = (_gdImageLine)dlsym( m_lib, "gdImageLine" );
    gdImageDashedLine = (_gdImageDashedLine)dlsym( m_lib, "gdImageDashedLine" );
    gdImageRectangle = (_gdImageRectangle)dlsym( m_lib, "gdImageRectangle" );
    gdImageFilledRectangle = (_gdImageFilledRectangle)dlsym( m_lib, "gdImageFilledRectangle" );
    gdImageBoundsSafe = (_gdImageBoundsSafe)dlsym( m_lib, "gdImageBoundsSafe" );
    gdImageChar = (_gdImageChar)dlsym( m_lib, "gdImageChar" );
    gdImageCharUp = (_gdImageCharUp)dlsym( m_lib, "gdImageCharUp" );
    gdImageString = (_gdImageString)dlsym( m_lib, "gdImageString" );
    gdImageStringUp = (_gdImageStringUp)dlsym( m_lib, "gdImageStringUp" );
    gdImageString16 = (_gdImageString16)dlsym( m_lib, "gdImageString16" );
    gdImageStringUp16 = (_gdImageStringUp16)dlsym( m_lib, "gdImageStringUp16" );
    gdFontCacheSetup = (_gdFontCacheSetup)dlsym( m_lib, "gdFontCacheSetup" );
    gdFontCacheShutdown = (_gdFontCacheShutdown)dlsym( m_lib, "gdFontCacheShutdown" );
    gdFreeFontCache = (_gdFreeFontCache)dlsym( m_lib, "gdFreeFontCache" );
    gdImagePolygon = (_gdImagePolygon)dlsym( m_lib, "gdImagePolygon" );
    gdImageOpenPolygon = (_gdImageOpenPolygon)dlsym( m_lib, "gdImageOpenPolygon" );
    gdImageFilledPolygon = (_gdImageFilledPolygon)dlsym( m_lib, "gdImageFilledPolygon" );
    gdImageColorAllocate = (_gdImageColorAllocate)dlsym( m_lib, "gdImageColorAllocate" );
    gdImageColorAllocateAlpha = (_gdImageColorAllocateAlpha)dlsym( m_lib, "gdImageColorAllocateAlpha" );
    gdImageColorClosest = (_gdImageColorClosest)dlsym( m_lib, "gdImageColorClosest" );
    gdImageColorClosestAlpha = (_gdImageColorClosestAlpha)dlsym( m_lib, "gdImageColorClosestAlpha" );
    gdImageColorClosestHWB = (_gdImageColorClosestHWB)dlsym( m_lib, "gdImageColorClosestHWB" );
    gdImageColorExact = (_gdImageColorExact)dlsym( m_lib, "gdImageColorExact" );
    gdImageColorExactAlpha = (_gdImageColorExactAlpha)dlsym( m_lib, "gdImageColorExactAlpha" );
    gdImageColorResolve = (_gdImageColorResolve)dlsym( m_lib, "gdImageColorResolve" );
    gdImageColorResolveAlpha = (_gdImageColorResolveAlpha)dlsym( m_lib, "gdImageColorResolveAlpha" );
    gdImageColorDeallocate = (_gdImageColorDeallocate)dlsym( m_lib, "gdImageColorDeallocate" );
    gdImageCreatePaletteFromTrueColor = (_gdImageCreatePaletteFromTrueColor)dlsym( m_lib, "gdImageCreatePaletteFromTrueColor" );
    gdImageTrueColorToPalette = (_gdImageTrueColorToPalette)dlsym( m_lib, "gdImageTrueColorToPalette" );
    gdImageColorTransparent = (_gdImageColorTransparent)dlsym( m_lib, "gdImageColorTransparent" );
    gdImagePaletteCopy = (_gdImagePaletteCopy)dlsym( m_lib, "gdImagePaletteCopy" );
    gdImageGif = (_gdImageGif)dlsym( m_lib, "gdImageGif" );
    gdImagePng = (_gdImagePng)dlsym( m_lib, "gdImagePng" );
    gdImagePngCtx = (_gdImagePngCtx)dlsym( m_lib, "gdImagePngCtx" );
    gdImageGifCtx = (_gdImageGifCtx)dlsym( m_lib, "gdImageGifCtx" );
    gdImagePngEx = (_gdImagePngEx)dlsym( m_lib, "gdImagePngEx" );
    gdImagePngCtxEx = (_gdImagePngCtxEx)dlsym( m_lib, "gdImagePngCtxEx" );
    gdImageWBMP = (_gdImageWBMP)dlsym( m_lib, "gdImageWBMP" );
    gdImageWBMPCtx = (_gdImageWBMPCtx)dlsym( m_lib, "gdImageWBMPCtx" );
    gdFree = (_gdFree)dlsym( m_lib, "gdFree" );
    gdImageJpeg = (_gdImageJpeg)dlsym( m_lib, "gdImageJpeg" );
    gdImageJpegCtx = (_gdImageJpegCtx)dlsym( m_lib, "gdImageJpegCtx" );
    gdImagePngToSink = (_gdImagePngToSink)dlsym( m_lib, "gdImagePngToSink" );
    gdImageGd = (_gdImageGd)dlsym( m_lib, "gdImageGd" );
    gdImageGd2 = (_gdImageGd2)dlsym( m_lib, "gdImageGd2" );
    gdImageEllipse = (_gdImageEllipse)dlsym( m_lib, "gdImageEllipse" );
    gdImageFilledArc = (_gdImageFilledArc)dlsym( m_lib, "gdImageFilledArc" );
    gdImageArc = (_gdImageArc)dlsym( m_lib, "gdImageArc" );
    gdImageFilledEllipse = (_gdImageFilledEllipse)dlsym( m_lib, "gdImageFilledEllipse" );
    gdImageFillToBorder = (_gdImageFillToBorder)dlsym( m_lib, "gdImageFillToBorder" );
    gdImageFill = (_gdImageFill)dlsym( m_lib, "gdImageFill" );
    gdImageCopy = (_gdImageCopy)dlsym( m_lib, "gdImageCopy" );
    gdImageCopyMerge = (_gdImageCopyMerge)dlsym( m_lib, "gdImageCopyMerge" );
    gdImageCopyMergeGray = (_gdImageCopyMergeGray)dlsym( m_lib, "gdImageCopyMergeGray" );
    gdImageCopyResized = (_gdImageCopyResized)dlsym( m_lib, "gdImageCopyResized" );
    gdImageCopyResampled = (_gdImageCopyResampled)dlsym( m_lib, "gdImageCopyResampled" );
    gdImageCopyRotated = (_gdImageCopyRotated)dlsym( m_lib, "gdImageCopyRotated" );
    gdImageSetBrush = (_gdImageSetBrush)dlsym( m_lib, "gdImageSetBrush" );
    gdImageSetTile = (_gdImageSetTile)dlsym( m_lib, "gdImageSetTile" );
    gdImageSetAntiAliased = (_gdImageSetAntiAliased)dlsym( m_lib, "gdImageSetAntiAliased" );
    gdImageSetAntiAliasedDontBlend = (_gdImageSetAntiAliasedDontBlend)dlsym( m_lib, "gdImageSetAntiAliasedDontBlend" );
    gdImageSetStyle = (_gdImageSetStyle)dlsym( m_lib, "gdImageSetStyle" );
    gdImageSetThickness = (_gdImageSetThickness)dlsym( m_lib, "gdImageSetThickness" );
    gdImageInterlace = (_gdImageInterlace)dlsym( m_lib, "gdImageInterlace" );
    gdImageAlphaBlending = (_gdImageAlphaBlending)dlsym( m_lib, "gdImageAlphaBlending" );
    gdImageSaveAlpha = (_gdImageSaveAlpha)dlsym( m_lib, "gdImageSaveAlpha" );
    gdImageCompare = (_gdImageCompare)dlsym( m_lib, "gdImageCompare" );
    gdImageSharpen = (_gdImageSharpen)dlsym( m_lib, "gdImageSharpen" );

    return;
}

gdLibrary::~gdLibrary()
{
    // dtor
    dlclose( m_lib );
    m_isValid = false;
}

bool gdLibrary::is_valid() const {
    return m_isValid;
}
