//
//  RMMediator.h
//
//  Created by 阮琦 on 2017/6/2.
//  Copyright © 2017年 com.roy All rights reserved.
//  Modified from CTMediator by casa
//

#import <Foundation/Foundation.h>

@interface RMMediator : NSObject

+ (instancetype)sharedInstance;

// remote application call interface
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// local application call interface
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;

- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
