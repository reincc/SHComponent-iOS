//
//  UIView+SHUIKit.h
//  SHComponent-iOS_Example
//
//  Created by rein on 2020/5/25.
//  Copyright © 2020 496213867@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SHUIKit)

@property (nonatomic, assign) CGFloat sh_x;
@property (nonatomic, assign) CGFloat sh_y;
@property (nonatomic, assign) CGFloat sh_width;
@property (nonatomic, assign) CGFloat sh_height;

@property (nonatomic, assign) CGFloat sh_centerX;
@property (nonatomic, assign) CGFloat sh_centerY;

//右下角坐标 rightX  bottomY
@property (nonatomic, assign) CGFloat sh_rightX;
@property (nonatomic, assign) CGFloat sh_bottomY;

//设置阴影
- (void)setShadowCorner:(UIColor *)shadowColor;

@end

NS_ASSUME_NONNULL_END
