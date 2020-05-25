//
//  NSString+SHUtil.h
//  SHComponent-iOS_Example
//
//  Created by rein on 2020/5/25.
//  Copyright © 2020 496213867@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SHUtil)

//base64加密
- (NSString *)sh_encryptBase64;

//base64解密
- (NSString *)sh_decryptBase64;

//AES128加密
- (NSString *)sh_encryptAES128WithKey:(NSString *)key;

//AES128解密
- (NSString *)sh_decryptAES128WithKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
