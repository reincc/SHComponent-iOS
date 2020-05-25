#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SHComponent.h"
#import "UIColor+SHUIKit.h"
#import "UIDevice+SHUIKit.h"
#import "UIImage+SHUIKit.h"

FOUNDATION_EXPORT double SHComponent_iOSVersionNumber;
FOUNDATION_EXPORT const unsigned char SHComponent_iOSVersionString[];

