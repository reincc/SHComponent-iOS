//
//  UIView+SHUIKit.m
//  SHComponent-iOS_Example
//
//  Created by rein on 2020/5/25.
//  Copyright © 2020 496213867@qq.com. All rights reserved.
//

#import "UIView+SHUIKit.h"

@implementation UIView (SHUIKit)

- (void)setSh_x:(CGFloat)sh_x {
    self.frame = CGRectMake(sh_x, self.sh_y, self.sh_width, self.sh_height);
}

- (CGFloat)sh_x {
    return self.frame.origin.x;
}

- (void)setSh_y:(CGFloat)sh_y {
    self.frame = CGRectMake(self.sh_x, sh_y, self.sh_width, self.sh_height);
}

- (CGFloat)sh_y {
    return self.frame.origin.y;
}

- (void)setSh_width:(CGFloat)sh_width{
    self.frame = CGRectMake(self.sh_x, self.sh_y, sh_width, self.sh_height);
}

- (CGFloat)sh_width {
    return self.frame.size.width;
}

- (void)setSh_height:(CGFloat)sh_height {
    self.frame = CGRectMake(self.sh_x, self.sh_y, self.sh_width, sh_height);
}

- (CGFloat)sh_height {
    return self.frame.size.height;
}

- (void)setSh_centerX:(CGFloat)sh_centerX {
    self.center = CGPointMake(sh_centerX, self.sh_centerY);
}

- (CGFloat)sh_centerX {
    return self.center.x;
}

- (void)setSh_centerY:(CGFloat)sh_centerY {
    self.center = CGPointMake(self.sh_centerX, sh_centerY);
}

- (CGFloat)sh_centerY {
    return self.center.y;
}

- (void)setSh_rightX:(CGFloat)sh_rightX {
    self.frame = CGRectMake(sh_rightX - self.sh_width, self.sh_y, self.sh_width, self.sh_height);
}

- (CGFloat)sh_rightX {
    return self.sh_x + self.sh_width;
}

- (void)setSh_bottomY:(CGFloat)sh_bottomY {
    self.frame = CGRectMake(self.sh_x, sh_bottomY - self.sh_height, self.sh_width, self.sh_height);
}

- (CGFloat)sh_bottomY {
    return self.sh_y + self.sh_height;
}

- (void)setShadowCorner:(UIColor *)shadowColor {
    self.layer.cornerRadius = 6;
    //阴影的颜色
    self.layer.shadowColor = shadowColor.CGColor;
    //阴影的透明度
    self.layer.shadowOpacity = 1.0f;
    //阴影的宽度
    self.layer.shadowRadius = 4;
    //阴影偏移量
    self.layer.shadowOffset = CGSizeMake(0,0);
}

@end
