//
//  Vertex.h
//  Composite
//
//  Created by Carlo Chung on 9/9/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Mark.h"

@protocol MarkVisitor;

/// 顶点
@interface Vertex : NSObject <Mark> 
{
  @protected
    /// 需要绘制到的具体位置
  CGPoint location_;
}

//作者注:"子类重新声明重载的属性与方法 是个好习惯", 为什么???????
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, assign) CGPoint location;//Vertex只需要这个属性, 其他属性都没有用
@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, readonly) id <Mark> lastChild;

- (id) initWithLocation:(CGPoint) location;
- (void) addMark:(id <Mark>) mark;
- (void) removeMark:(id <Mark>) mark;
- (id <Mark>) childMarkAtIndex:(NSUInteger) index;

// for the Visitor pattern
- (void) acceptMarkVisitor:(id <MarkVisitor>) visitor;

// for the Prototype pattern
- (id) copyWithZone:(NSZone *)zone;

// for the Iterator pattern
- (NSEnumerator *) enumerator;

// for internal iterator implementation
- (void) enumerateMarksUsingBlock:(void (^)(id <Mark> item, BOOL *stop)) block;

// for the Memento pattern
- (id)initWithCoder:(NSCoder *)coder;
- (void)encodeWithCoder:(NSCoder *)coder;

@end
