//
//  HJSingleton.m
//  code07_Singleton
//
//  Created by huangJiong on 16/11/22.
//  Copyright © 2016年 Carlo Chung. All rights reserved.
//

#import "HJSingleton.h"

@implementation HJSingleton

static HJSingleton *singleton = nil;

+ (instancetype)sharedInstance {
    if (singleton == nil) {
        singleton = NSAllocateObject(self.class, 0, nil);
    }
    return singleton;
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone {
    return [self sharedInstance];
}

+ (id)copyWithZone:(struct _NSZone *)zone {
    return [self sharedInstance];
}

@end
