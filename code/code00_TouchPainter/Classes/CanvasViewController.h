//
//  CanvasViewController.h
//  Composite
//
//  Created by Carlo Chung on 9/11/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Scribble.h"
#import "CanvasView.h"
#import "CanvasViewGenerator.h"
#import "CommandBarButton.h"
#import "NSMutableArray+Stack.h"

/// 画板
@interface CanvasViewController : UIViewController
{
  @private
  Scribble *scribble_;
    /// 画布视图
  CanvasView *canvasView_;
  
  CGPoint startPoint_;
  UIColor *strokeColor_;
  CGFloat strokeSize_;
}

@property (nonatomic, retain) CanvasView *canvasView;
@property (nonatomic, retain) Scribble *scribble;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, assign) CGFloat strokeSize;

/// 通过生成器来加载画布
- (void) loadCanvasViewWithGenerator:(CanvasViewGenerator *)generator;

- (IBAction) onBarButtonHit:(id) button;
- (IBAction) onCustomBarButtonHit:(CommandBarButton *)barButton;

- (NSInvocation *) drawScribbleInvocation;
- (NSInvocation *) undrawScribbleInvocation;

- (void) executeInvocation:(NSInvocation *)invocation withUndoInvocation:(NSInvocation *)undoInvocation;
- (void) unexecuteInvocation:(NSInvocation *)invocation withRedoInvocation:(NSInvocation *)redoInvocation;

@end

