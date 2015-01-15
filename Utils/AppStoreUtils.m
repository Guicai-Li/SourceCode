//
//  AppStoreUtils.m
//  LazyLoadingTest1
//
//  Created by LiGuicai on 15/1/15.
//  Copyright (c) 2015年 liguicai. All rights reserved.
//

#import "AppStoreUtils.h"

@implementation AppStoreUtils

+ (void)gotoAppStore{
    NSString *url;
    if (SYSTEM_VERSION < 7) {
        url = APP_STORE_URL_7_UNDER;
    } else {
        url = APP_STORE_URL_7_SUPPER;
    }
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]];
}


@end
