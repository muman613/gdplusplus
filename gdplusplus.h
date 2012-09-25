/**
 *
 */

#ifndef _GDPLUSPLUS_H__
#define __GDPLUSPLUS_H__

class gdLibrary;

class gdImageObject {
public:
    gdImageObject(gdLibrary* pLib, int sx, int sy);
    gdImageObject(gdLibrary* pLib, const char* szFilename);
    gdImageObject(const gdImageObject& copy);
    virtual ~gdImageObject();

    bool        is_valid() const;

    gdImagePtr operator *();

protected:
    gdLibrary*  m_gdpp;
    bool        m_isValid;
    gdImagePtr  m_imagePtr;
};

class gdLibrary {
public:
    gdLibrary();
    virtual ~gdLibrary();

    bool is_valid() const;


    _gdAlphaBlend gdAlphaBlend;
    _gdImageCreate gdImageCreate;
    _gdImageCreateTrueColor gdImageCreateTrueColor;
    _gdImageCreateFromPng gdImageCreateFromPng;
    _gdImageCreateFromPngCtx gdImageCreateFromPngCtx;
    _gdImageCreateFromPngPtr gdImageCreateFromPngPtr;
    _gdImageCreateFromGif gdImageCreateFromGif;
    _gdImageCreateFromGifCtx gdImageCreateFromGifCtx;
    _gdImageCreateFromGifPtr gdImageCreateFromGifPtr;
    _gdImageCreateFromWBMP gdImageCreateFromWBMP;
    _gdImageCreateFromWBMPCtx gdImageCreateFromWBMPCtx;
    _gdImageCreateFromWBMPPtr gdImageCreateFromWBMPPtr;
    _gdImageCreateFromJpeg gdImageCreateFromJpeg;
    _gdImageCreateFromJpegCtx gdImageCreateFromJpegCtx;
    _gdImageCreateFromJpegPtr gdImageCreateFromJpegPtr;
    _gdImageCreateFromPngSource gdImageCreateFromPngSource;
    _gdImageCreateFromGd gdImageCreateFromGd;
    _gdImageCreateFromGdCtx gdImageCreateFromGdCtx;
    _gdImageCreateFromGdPtr gdImageCreateFromGdPtr;
    _gdImageCreateFromGd2 gdImageCreateFromGd2;
    _gdImageCreateFromGd2Ctx gdImageCreateFromGd2Ctx;
    _gdImageCreateFromGd2Ptr gdImageCreateFromGd2Ptr;
    _gdImageCreateFromGd2Part gdImageCreateFromGd2Part;
    _gdImageCreateFromGd2PartCtx gdImageCreateFromGd2PartCtx;
    _gdImageCreateFromGd2PartPtr gdImageCreateFromGd2PartPtr;
    _gdImageCreateFromXbm gdImageCreateFromXbm;
    _gdImageCreateFromXpm gdImageCreateFromXpm;
    _gdImageDestroy gdImageDestroy;
    _gdImageSetPixel gdImageSetPixel;
    _gdImageGetPixel gdImageGetPixel;
    _gdImageGetTrueColorPixel gdImageGetTrueColorPixel;
    _gdImageAABlend gdImageAABlend;
    _gdImageLine gdImageLine;
    _gdImageDashedLine gdImageDashedLine;
    _gdImageRectangle gdImageRectangle;
    _gdImageFilledRectangle gdImageFilledRectangle;
    _gdImageBoundsSafe gdImageBoundsSafe;
    _gdImageChar gdImageChar;
    _gdImageCharUp gdImageCharUp;
    _gdImageString gdImageString;
    _gdImageStringUp gdImageStringUp;
    _gdImageString16 gdImageString16;
    _gdImageStringUp16 gdImageStringUp16;
    _gdFontCacheSetup gdFontCacheSetup;
    _gdFontCacheShutdown gdFontCacheShutdown;
    _gdFreeFontCache gdFreeFontCache;
    _gdImagePolygon gdImagePolygon;
    _gdImageOpenPolygon gdImageOpenPolygon;
    _gdImageFilledPolygon gdImageFilledPolygon;
    _gdImageColorAllocate gdImageColorAllocate;
    _gdImageColorAllocateAlpha gdImageColorAllocateAlpha;
    _gdImageColorClosest gdImageColorClosest;
    _gdImageColorClosestAlpha gdImageColorClosestAlpha;
    _gdImageColorClosestHWB gdImageColorClosestHWB;
    _gdImageColorExact gdImageColorExact;
    _gdImageColorExactAlpha gdImageColorExactAlpha;
    _gdImageColorResolve gdImageColorResolve;
    _gdImageColorResolveAlpha gdImageColorResolveAlpha;
    _gdImageColorDeallocate gdImageColorDeallocate;
    _gdImageCreatePaletteFromTrueColor gdImageCreatePaletteFromTrueColor;
    _gdImageTrueColorToPalette gdImageTrueColorToPalette;
    _gdImageColorTransparent gdImageColorTransparent;
    _gdImagePaletteCopy gdImagePaletteCopy;
    _gdImageGif gdImageGif;
    _gdImagePng gdImagePng;
    _gdImagePngCtx gdImagePngCtx;
    _gdImageGifCtx gdImageGifCtx;
    _gdImagePngEx gdImagePngEx;
    _gdImagePngCtxEx gdImagePngCtxEx;
    _gdImageWBMP gdImageWBMP;
    _gdImageWBMPCtx gdImageWBMPCtx;
    _gdFree gdFree;
    _gdImageJpeg gdImageJpeg;
    _gdImageJpegCtx gdImageJpegCtx;
    _gdImagePngToSink gdImagePngToSink;
    _gdImageGd gdImageGd;
    _gdImageGd2 gdImageGd2;
    _gdImageEllipse gdImageEllipse;
    _gdImageFilledArc gdImageFilledArc;
    _gdImageArc gdImageArc;
    _gdImageFilledEllipse gdImageFilledEllipse;
    _gdImageFillToBorder gdImageFillToBorder;
    _gdImageFill gdImageFill;
    _gdImageCopy gdImageCopy;
    _gdImageCopyMerge gdImageCopyMerge;
    _gdImageCopyMergeGray gdImageCopyMergeGray;
    _gdImageCopyResized gdImageCopyResized;
    _gdImageCopyResampled gdImageCopyResampled;
    _gdImageCopyRotated gdImageCopyRotated;
    _gdImageSetBrush gdImageSetBrush;
    _gdImageSetTile gdImageSetTile;
    _gdImageSetAntiAliased gdImageSetAntiAliased;
    _gdImageSetAntiAliasedDontBlend gdImageSetAntiAliasedDontBlend;
    _gdImageSetStyle gdImageSetStyle;
    _gdImageSetThickness gdImageSetThickness;
    _gdImageInterlace gdImageInterlace;
    _gdImageAlphaBlending gdImageAlphaBlending;
    _gdImageSaveAlpha gdImageSaveAlpha;
    _gdImageCompare gdImageCompare;
    _gdImageSharpen gdImageSharpen;

private:
    bool    m_isValid;
    void*   m_lib;
};


#endif
