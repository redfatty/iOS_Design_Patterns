//
//  Mark.h
//  Composite
//
//  Created by Carlo Chung on 9/9/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MarkVisitor.h"

/// 痕迹
@protocol Mark <NSObject, NSCopying, NSCoding>

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, assign) CGPoint location;
/// 子节点个数
@property (nonatomic, readonly) NSUInteger count;
/// 最后一个子节点
@property (nonatomic, readonly) id <Mark> lastChild;

/// 深复制一个聚合结构对象
- (id) copy;
- (void) addMark:(id <Mark>) mark;
- (void) removeMark:(id <Mark>) mark;
- (id <Mark>) childMarkAtIndex:(NSUInteger) index;

// for the Visitor pattern
// 为支持访问者模式而定义的方法
- (void) acceptMarkVisitor:(id <MarkVisitor>) visitor;

// for the Iterator pattern
- (NSEnumerator *) enumerator;

// for internal iterator implementation
- (void) enumerateMarksUsingBlock:(void (^)(id <Mark> item, BOOL *stop)) block;

// for a bad example
- (void) drawWithContext:(CGContextRef) context;

@end
