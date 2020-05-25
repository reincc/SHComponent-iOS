//
//  UIImage+SHUIKit.h
//  SHUIKit
//
//  Created by rein on 2020/5/20.
//  Copyright © 2020 rein. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (SHUIKit)

// 给图片设置透明度
- (UIImage *)sh_setAlpha:(CGFloat)alpha;

// 颜色转换为图片
+ (UIImage *)sh_imageWithColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
