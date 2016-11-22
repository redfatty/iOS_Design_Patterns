//
//  Character.h
//  Builder
//
//  Created by Carlo Chung on 11/27/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 角色类
@interface Character : NSObject 
{
  @private
  float protection_;
  float power_;
  float strength_;
  float stamina_;
  float intelligence_;
  float agility_;
  float aggressiveness_;
}

/// 防御系数
@property (nonatomic, assign) float protection;
/// 能量
@property (nonatomic, assign) float power;
/// 力量
@property (nonatomic, assign) float strength;
/// 耐力
@property (nonatomic, assign) float stamina;
/// 智力
@property (nonatomic, assign) float intelligence;
/// 敏捷度
@property (nonatomic, assign) float agility;
/// 攻击力
@property (nonatomic, assign) float aggressiveness;

@end
