//
//  SaveScribbleCommand.h
//  TouchPainter
//
//  Created by Carlo Chung on 10/22/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Command.h"

/// 保存涂鸦命令
@interface SaveScribbleCommand : Command 
{

}

- (void) execute;

@end
