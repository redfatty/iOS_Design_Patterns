//
//  Dot.h
//  Composite
//
//  Created by Carlo Chung on 9/9/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Vertex.h"

@protocol MarkVisitor;

/// 点, 叶节点
@interface Dot : Vertex
{
  @private
  UIColor *color_;
  CGFloat size_;
}

//Dot除了需要 location 外, 还需要color,size 这两个属性
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, assign) CGFloat size;

// for the Visitor pattern
- (void) acceptMarkVisitor:(id <MarkVisitor>)visitor;

// for the Prototype pattern
- (id) copyWithZone:(NSZone *)zone;

// for the Memento pattern
- (id)initWithCoder:(NSCoder *)coder;
- (void)encodeWithCoder:(NSCoder *)coder;

@end
