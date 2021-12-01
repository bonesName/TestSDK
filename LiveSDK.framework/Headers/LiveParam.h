//
//  LiveParam.h
//  XiaoZhiBoApp
//
//  Created by Bones on 2021/11/3.
//  Copyright © 2021 tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface LiveParam : NSObject <NSCoding>

//@property (nonatomic , assign) int activity_id;             //活动id，用户必传（后不传）

@property (nonatomic , assign) int platform_id;             // 平台id，用户必传

@property (nonatomic , assign) int platform_user_id;        //平台用户id，用户必传

@property (nonatomic , copy) NSString* platform_user_name;  //平台用户名，用户必传

@property (nonatomic , copy) NSString* platform_user_nickname;//用平台户的昵称，用户必传

@property (nonatomic , copy) NSString* sign;                //平台签名，校验请求合法性，用户必传

@property (nonatomic , copy) NSString* timestamp;            //时间戳


///读取实例变量，并把这些数据写到 coder 中去，序列化数据
- (void)encodeWithCoder:(NSCoder *)encoder;

///从 coder 中读取数据，保存到相应的变量中，即反序列化数据
- (id)initWithCoder:(NSCoder *)decoder;


@end

NS_ASSUME_NONNULL_END


@interface LiveParamManager : NSObject

/**
 *  获取进入直播的单例
 *
 *  @return 管理器实例
 */
+ (instancetype)shareManager;

- (void)saveLiveParams:(LiveParam *)params;

- (LiveParam *)getLiveParams;

- (UINavigationController *)navigationViewController;

@end
