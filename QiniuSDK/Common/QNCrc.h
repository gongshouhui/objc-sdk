//
//  QNCrc.h
//  QiniuSDK
//
//  Created by bailong on 14-9-29.
//  Copyright (c) 2014年 Qiniu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface QNCrc : NSObject

+ (UInt32) file:(NSString *)filePath;
+ (UInt32) data:(NSData *)data;

@end