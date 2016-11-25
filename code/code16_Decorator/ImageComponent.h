//
//  ImageComponent.h
//  Decorator
//
//  Created by Carlo Chung on 11/30/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol ImageComponent <NSObject>

// We will intercept these
// UIImage methods and add
// additional behavior
// 通过截获UIImage的这些方法, 来插入我们自己的一些附加行为:
@optional
- (void) drawAsPatternInRect:(CGRect)rect; 
- (void) drawAtPoint:(CGPoint)point;
- (void) drawAtPoint:(CGPoint)point blendMode:(CGBlendMode)blendMode alpha:(CGFloat)alpha;
- (void) drawInRect:(CGRect)rect;
- (void) drawInRect:(CGRect)rect blendMode:(CGBlendMode)blendMode alpha:(CGFloat)alpha;

@end
