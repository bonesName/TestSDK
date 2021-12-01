//
//  LiveManager.h
//  XiaoZhiBoApp
//
//  Created by Bones on 2021/11/3.
//  Copyright © 2021 tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LiveParam.h"

NS_ASSUME_NONNULL_BEGIN
@interface LiveManager : NSObject

typedef void(^DissmissLive)(void);

/**
 *  获取进入直播的单例
 *
 *  @return 管理器实例
 */
+ (instancetype)shareManager;


/**
 *  1.1 进入直播平台配置
 *
 *  @param params                       平台参数
 *  @param currentVC                 当前控制器
 *  @param completion               退出SDK 回调
 *
 *  @return 200：成功；400：请求参数异常或业务逻辑抛出的异常；401：token失效 返回登陆⻚面； 500：系统内部错误；
 */
- (void)enterLiveSDK:(LiveParam *)params viewController:(UIViewController *)currentVC  completion:(DissmissLive )completion;



@end

NS_ASSUME_NONNULL_END
