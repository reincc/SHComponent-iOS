//
//  UIColor+SHUIKit.m
//  SHUIKit
//
//  Created by rein on 2020/4/27.
//  Copyright © 2020 rein. All rights reserved.
//

#import "UIColor+SHUIKit.h"

@implementation UIColor (SHUIKit)

+ (UIColor *)sh_colorWithHex:(NSInteger)hex alpha:(CGFloat)alpha {
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0 green:((float)((hex & 0xFF00) >> 8))/255.0 blue:((float)(hex & 0xFF))/255.0 alpha:alpha];
}

+ (UIColor *)sh_colorWithHex:(NSInteger)hex {
    return [UIColor sh_colorWithHex:hex alpha:1.0f];
}

+ (UIColor *)sh_colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha{
    NSString *cString = [[hexString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    if (!cString || [cString length] < 6) {
//        return [UIColor clearColor];
        return nil;
    }
    
    if ([cString hasPrefix:@"0X"]) {
        cString = [cString substringFromIndex:2];
    }
    if ([cString hasPrefix:@"#"]) {
        cString = [cString substringFromIndex:1];
    }
    if ([cString length] != 6) {
//        return [UIColor clearColor];
        return nil;
    }
    
    NSRange range;
    range.location = 0;
    range.length = 2;
    
    //r
    NSString *rString = [cString substringWithRange:range];
    
    //g
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    
    //b
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
    
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:((float)r/255.0f) green:((float)g/255.0f) blue:((float)b/255.0f) alpha:alpha];
}

+ (UIColor *)sh_colorWithHexString:(NSString *)hexString{
    return [[self class] sh_colorWithHexString:hexString alpha:1.0f];
}


@end
