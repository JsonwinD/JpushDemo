//
//  AppDelegate.h
//  JpushDemo
//
//  Created by Jaqen on 16/7/20.
//  Copyright © 2016年 lairong. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *appKey = @"29746e5a9cccecd9f1fda427";//申请应用成功以后官方会提供给你

static NSString *channel = @"Publish channel";

static BOOL isProduction = FALSE;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

