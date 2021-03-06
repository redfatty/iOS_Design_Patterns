//
//  Scribble.h
//  TouchPainter
//
//  Created by Carlo Chung on 9/20/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Mark.h"
#import "ScribbleMemento.h"

/// 涂鸦对象类
@interface Scribble : NSObject
{
  @private
  id <Mark> parentMark_;
  id <Mark> incrementalMark_;
}

//mark 管理的方法:
// methods for Mark management

/**
 插入添加 mark

 @param aMark                   要插入的 mark
 @param shouldAddToPreviousMark 是否附加到原有的 mark 中
 */
- (void) addMark:(id <Mark>)aMark shouldAddToPreviousMark:(BOOL)shouldAddToPreviousMark;
- (void) removeMark:(id <Mark>)aMark;

// methods for memento
- (id) initWithMemento:(ScribbleMemento *)aMemento;
+ (Scribble *) scribbleWithMemento:(ScribbleMemento *)aMemento;
- (ScribbleMemento *) scribbleMemento;
- (ScribbleMemento *) scribbleMementoWithCompleteSnapshot:(BOOL)hasCompleteSnapshot;
- (void) attachStateFromMemento:(ScribbleMemento *)memento;

@end
