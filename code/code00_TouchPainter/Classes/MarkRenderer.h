//
//  MarkRenderer.h
//  TouchPainter
//
//  Created by Carlo Chung on 9/14/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarkVisitor.h"
#import "Dot.h"
#import "Vertex.h"
#import "Stroke.h"

@interface MarkRenderer : NSObject <MarkVisitor>
{
  @private
  BOOL shouldMoveContextToDot_;
  
  @protected
  CGContextRef context_;
}

- (id) initWithCGContext:(CGContextRef)context;


// 重新声明重载自MarkVisitor协议中的方法:
- (void) visitMark:(id <Mark>)mark;
- (void) visitDot:(Dot *)dot;
- (void) visitVertex:(Vertex *)vertex;
- (void) visitStroke:(Stroke *)stroke;

@end
