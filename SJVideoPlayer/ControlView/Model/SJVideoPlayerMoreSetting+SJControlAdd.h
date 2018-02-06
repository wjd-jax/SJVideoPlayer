//
//  SJVideoPlayerMoreSetting+SJControlAdd.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2018/2/5.
//  Copyright © 2018年 SanJiang. All rights reserved.
//

#import "SJVideoPlayerMoreSetting.h"

NS_ASSUME_NONNULL_BEGIN

@interface SJVideoPlayerMoreSetting (SJControlAdd)

@property (nonatomic, copy, nullable) void(^_exeBlock)(SJVideoPlayerMoreSetting *setting);

@end

NS_ASSUME_NONNULL_END
