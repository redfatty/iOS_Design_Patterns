//
//  StandardCharacterBuilder.h
//  Builder
//
//  Created by Carlo Chung on 11/27/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CharacterBuilder.h"

/// 具体的 角色生成器
@interface StandardCharacterBuilder : CharacterBuilder 
{

}

// 以下方法也可以不用再次申明:
// overriden methods from the abstract CharacterBuilder
- (CharacterBuilder *) buildStrength:(float) value;
- (CharacterBuilder *) buildStamina:(float) value;
- (CharacterBuilder *) buildIntelligence:(float) value;
- (CharacterBuilder *) buildAgility:(float) value;
- (CharacterBuilder *) buildAggressiveness:(float) value;

@end
