//
//  ScribbleManager.h
//  TouchPainter
//
//  Created by Carlo Chung on 9/20/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Scribble.h"
#import "ScribbleThumbnailViewImageProxy.h"

/// 涂鸦管理类
@interface ScribbleManager : NSObject 
{
	
}

/// 保存涂鸦
// 通过这个接口, 实现外观设计模式
- (void) saveScribble:(Scribble *)scribble thumbnail:(UIImage *)image;
- (NSInteger) numberOfScribbles;
- (Scribble *) scribbleAtIndex:(NSInteger)index;
- (UIView *) scribbleThumbnailViewAtIndex:(NSInteger)index;

@end
