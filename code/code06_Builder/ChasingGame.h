//
//  ChasingGame.h
//  Builder
//
//  Created by Carlo Chung on 11/27/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StandardCharacterBuilder.h"

/// 指导者
@interface ChasingGame : NSObject 
{

}

/// 创建游戏者
- (Character *) createPlayer:(CharacterBuilder *) builder;
/// 创建敌人
- (Character *) createEnemy:(CharacterBuilder *) builder;

@end
