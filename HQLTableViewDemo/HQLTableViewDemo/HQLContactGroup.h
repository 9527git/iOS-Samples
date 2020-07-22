//
//  HQLContactGroup.h
//  HQLTableViewDemo
//
//  Created by ToninTech on 2016/12/29.
//  Copyright © 2016年 ToninTech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HQLContact.h"

/// 分组模型
@interface HQLContactGroup : NSObject

@property (nonatomic,copy) NSString *name;             // 组名
@property (nonatomic,copy) NSString *detail;           // 分组描述
@property (nonatomic,strong) NSMutableArray *contacts; // 联系人

// 静态初始换方法
+ (HQLContactGroup *)initWithName:(NSString *)name
                           detail:(NSString *)detail
                         contacts:(NSMutableArray *)contacts;

// 构造方法
- (HQLContactGroup *)initWithName:(NSString *)name
                           detail:(NSString *)detail
                         contacts:(NSMutableArray *)contacts;

@end
