//
//  SystemUnit.h
//  Unit
//
//  Created by LiGuicai on 15/1/9.
//  Copyright (c) 2015年 liguicai. All rights reserved.
//

#ifndef Unit_SystemUnit_h
#define Unit_SystemUnit_h

/*****************************************  获取设备的一些信息 *************************************/

//设备是否是iPhone4
#define DEVICE_IS_IPHONE4 (([[UIScreen mainScreen] bounds].size.height - 480) ? NO : YES)

//设备是否是iPhone5
#define DEVICE_IS_IPHONE5 (([[UIScreen mainScreen] bounds].size.height - 568) ? NO : YES)

//设备是否iPhone6
#define DEVICE_IS_IPHONE6 (([[UIScreen mainScreen] bounds].size.height - 667) ? NO : YES)

//设备是否iPhone6plus
#define DEVICE_IS_IPHONE6_PLUS (([[UIScreen mainScreen] bounds].size.height - 736) ? NO : YES)

//设备屏幕宽度
#define DEVICE_SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width

//设备屏幕高度
#define DEVICE_SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height


//设备版本号
#define SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

#endif
