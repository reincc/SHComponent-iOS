//
//  UIColor+SHUIKit.h
//  SHUIKit
//
//  Created by rein on 2020/4/27.
//  Copyright © 2020 rein. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (SHUIKit)

+ (UIColor *)sh_colorWithHex:(NSInteger)hex;
+ (UIColor *)sh_colorWithHex:(NSInteger)hex alpha:(CGFloat)alpha;
+ (UIColor *)sh_colorWithHexString:(NSString *)hexString; //默认alpha 1.0
+ (UIColor *)sh_colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

@end

/**
 *  RGB颜色，Alpha默认1.0
 */
CG_INLINE UIColor *sh_color_rgb(NSInteger red, NSInteger green, NSInteger blue) {
    return [UIColor colorWithRed:(red/255.0) green:(green/255.0) blue:(blue/255.0) alpha:1.0];
}

/**
 *  RGB & Alpha 颜色
 */
CG_INLINE UIColor *sh_color_rgb_alpha(NSInteger red, NSInteger green, NSInteger blue, CGFloat alpha) {
    return [UIColor colorWithRed:(red/255.0) green:(green/255.0) blue:(blue/255.0) alpha:alpha];
}

/**
 *  Hex颜色，Alpha默认1.0，支持0x000000
 */
CG_INLINE UIColor *sh_color_hex(NSInteger hex) {
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0 green:((float)((hex & 0xFF00) >> 8))/255.0 blue:((float)(hex & 0xFF))/255.0 alpha:1.0];
}

/**
 *  Hex & Alpha颜色，支持0x000000
 */
CG_INLINE UIColor *sh_color_hex_alpha(NSInteger hex, CGFloat alpha) {
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0 green:((float)((hex & 0xFF00) >> 8))/255.0 blue:((float)(hex & 0xFF))/255.0 alpha:alpha];
}

/**
 *  Hex颜色，Alpha默认1.0，支持#000000、0x000000、000000字符串
 */
CG_INLINE UIColor *sh_color_hexString(NSString *hexString) {
    return [UIColor sh_colorWithHexString:hexString];
}

/**
 *  Hex & Alpha颜色，支持#000000、0x000000、000000字符串
 */
CG_INLINE UIColor *sh_color_hexString_alpha(NSString *hexString, CGFloat alpha) {
    return [UIColor sh_colorWithHexString:hexString alpha:alpha];
}

NS_ASSUME_NONNULL_END
