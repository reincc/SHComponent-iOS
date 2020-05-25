//
//  UIDevice+SHUIKit.h
//  SHUIKit
//
//  Created by rein on 2020/4/27.
//  Copyright © 2020 rein. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define _ScreenSize_   ([UIScreen mainScreen].bounds.size) //屏幕宽高
#define _ScreenWidth_  ([UIScreen mainScreen].bounds.size.width) //屏幕宽度
#define _ScreenHeight_ ([UIScreen mainScreen].bounds.size.height) //屏幕高度

#define _StatusBarHeight_ [UIApplication sharedApplication].statusBarFrame.size.height  //状态栏高度，数字系列20，x系列44
#define _NavBarHeight_    (44.0f) //导航栏高度
#define _TabBarHeight_    (49.0f) //TabBar高度
#define _HomeBarHeight_   ((_iPhoneX_Serise_)?(34.0f):(0.0f)) //虚拟条高度
#define _HeaderBarHeight_ (_StatusBarHeight_+_NavBarHeight_) //导航栏+状态栏高度
#define _FooterBarHeight_ (_HomeBarHeight_+_TabBarHeight_) //虚拟条+TabBar高度

//设备尺寸
#define _iPhone4_   (CGSizeEqualToSize(CGSizeMake(320, 480), [UIScreen mainScreen].bounds.size)) //4、4s
#define _iPhone5_   (CGSizeEqualToSize(CGSizeMake(320, 568), [UIScreen mainScreen].bounds.size)) //5、5c、5s
#define _iPhone6_   (CGSizeEqualToSize(CGSizeMake(375, 667), [UIScreen mainScreen].bounds.size)) //6、6s、7、7s、8、8s
#define _iPhone6P_  (CGSizeEqualToSize(CGSizeMake(414, 736), [UIScreen mainScreen].bounds.size)) //plus系列
#define _iPhoneX_   (CGSizeEqualToSize(CGSizeMake(375, 812), [UIScreen mainScreen].bounds.size)) //iPhone X、iPhone XS
#define _iPhoneXM_  (CGSizeEqualToSize(CGSizeMake(414, 896), [UIScreen mainScreen].bounds.size)) //iPhone XR、iPhone XS MAX
#define _iPhoneX_Serise_   ((_iPhoneX_ || _iPhoneXM_)? YES: NO)

@interface UIDevice (SHUIKit)

@end

NS_ASSUME_NONNULL_END
