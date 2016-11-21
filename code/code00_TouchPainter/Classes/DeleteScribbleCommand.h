//
//  DeleteScribbleCommand.h
//  TouchPainter
//
//  Created by Carlo Chung on 11/8/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Command.h"

/// 删除涂鸦命令
@interface DeleteScribbleCommand : Command
{

}

- (void) execute;

@end
