//
//  Vertex.m
//  Composite
//
//  Created by Carlo Chung on 9/9/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import "Vertex.h"


@implementation Vertex
@synthesize location=location_;
@dynamic color, size;

- (id) initWithLocation:(CGPoint) aLocation
{
  if (self = [super init])
  {
    [self setLocation:aLocation];
  }
  
  return self;
}


#pragma mark - 默认属性:
// default properties do nothing
//size 和 color 不作处理
//因为Vertex不关心这两个属性
- (void) setColor:(UIColor *)color {}
- (UIColor *) color { return nil; }
- (void) setSize:(CGFloat)size {}
- (CGFloat) size { return 0.0; }


#pragma mark - mark 操作:
// Mark operations do nothing
// mark相关操作什么也不做
- (void) addMark:(id <Mark>) mark {}
- (void) removeMark:(id <Mark>) mark {}
- (id <Mark>) childMarkAtIndex:(NSUInteger) index { return nil; }
- (id <Mark>) lastChild { return nil; }
- (NSUInteger) count { return 0; }
- (NSEnumerator *) enumerator { return nil; }


- (void) acceptMarkVisitor:(id <MarkVisitor>)visitor
{
  [visitor visitVertex:self];
}


#pragma mark -
#pragma mark NSCopying method

// it needs to be implemented for memento
// 必须实现, 以支持备忘录
- (id)copyWithZone:(NSZone *)zone
{
    //注意:使用 self.class
    //Vertex只实现了(关心) location 属性, 所以只需要使用 location 来实现复制
  Vertex *vertexCopy = [[[self class] allocWithZone:zone] initWithLocation:location_];
  
  return vertexCopy;
}


#pragma mark -
#pragma mark NSCoder methods

- (id)initWithCoder:(NSCoder *)coder
{
  if (self = [super init])
  {
    location_ = [(NSValue *)[coder decodeObjectForKey:@"VertexLocation"] CGPointValue];
  }
  
  return self;
}

- (void)encodeWithCoder:(NSCoder *)coder
{
  [coder encodeObject:[NSValue valueWithCGPoint:location_] forKey:@"VertexLocation"];
}


#pragma mark -
#pragma mark MarkIterator methods

// for internal iterator implementation
- (void) enumerateMarksUsingBlock:(void (^)(id <Mark> item, BOOL *stop)) block {}


#pragma mark -
#pragma mark An Extended Direct-draw Example

// for a direct draw example
// 画一系列圆点到自身所处位置
- (void) drawWithContext:(CGContextRef)context
{
  CGFloat x = self.location.x;
  CGFloat y = self.location.y;
  
  CGContextAddLineToPoint(context, x, y);
}

@end


