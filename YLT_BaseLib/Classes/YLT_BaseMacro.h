//
//  YLT_BaseMacro.h
//  Pods
//
//  Created by YLT_Alex on 2017/10/25.
//

#ifndef YLT_BaseMacro_h
#define YLT_BaseMacro_h

#import "NSObject+YLT_BaseObject.h"
/// iOS设备信息
#define iPad [NSObject YLT_DeviceIsiPad]
#define iPhone [NSObject YLT_DeviceIsiPhone]

// iOS系统信息
#define YLT_iOS_VERSION [[UIDevice currentDevice] systemVersion]

#define iOS7 ([[UIDevice currentDevice] systemVersion].floatValue >= 7.0 && [[UIDevice currentDevice] systemVersion].floatValue <= 8.0)
#define iOS7Later ([[UIDevice currentDevice] systemVersion].floatValue >= 7.0)

#define iOS8 ([[UIDevice currentDevice] systemVersion].floatValue >= 8.0 && [[UIDevice currentDevice] systemVersion].floatValue <= 9.0)
#define iOS8Later ([[UIDevice currentDevice] systemVersion].floatValue >= 8.0)

#define iOS9 ([[UIDevice currentDevice] systemVersion].floatValue >= 9.0 && [[UIDevice currentDevice] systemVersion].floatValue <= 10.0)
#define iOS9Later ([[UIDevice currentDevice] systemVersion].floatValue >= 9.0)

#define iOS10 ([[UIDevice currentDevice] systemVersion].floatValue >= 10.0 && [[UIDevice currentDevice] systemVersion].floatValue <= 11.0)
#define iOS10Later ([[UIDevice currentDevice] systemVersion].floatValue >= 10.0)

#define iOS11 ([[UIDevice currentDevice] systemVersion].floatValue >= 11.0 && [[UIDevice currentDevice] systemVersion].floatValue <= 12.0)
#define iOS11Later ([[UIDevice currentDevice] systemVersion].floatValue >= 11.0)

#define iOSNew ([[UIDevice currentDevice] systemVersion].floatValue >= 12.0)

//获取系统对象
#define YLT_Application        [UIApplication sharedApplication]
#define YLT_AppWindow          [UIApplication sharedApplication].keyWindow
#define YLT_AppDelegate        (AppDelegate *)[UIApplication sharedApplication].delegate
#define YLT_RootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define YLT_UserDefaults       [NSUserDefaults standardUserDefaults]
#define YLT_NotificationCenter [NSNotificationCenter defaultCenter]
//获取屏幕宽高
#define YLT_SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define YLT_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define YLT_SCREEN_BOUNDS [UIScreen mainScreen].bounds

// iOS沙盒目录
#define YLT_DOCUMENT_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define YLT_CACHE_PATH [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]

#if DEBUG
//输出日志信息
#define YLT_LogAll(type,format,...) NSLog(@"%@ %s+%d " format,type,__func__,__LINE__,##__VA_ARGS__)
#define YLT_Log(format,...) PHLogAll(@"",format,##__VA_ARGS__)
#define YLT_LogInfo(format,...) PHLogAll(@"",format,##__VA_ARGS__)
#define YLT_LogWarn(format,...) PHLogAll(@"‼️",format,##__VA_ARGS__)
#define YLT_LogError(format,...) PHLogAll(@"❌❌",format,##__VA_ARGS__)
#else
#define YLT_Log(format,...)
#define YLT_LogInfo(format,...)
#define YLT_LogWarn(format,...)
#define YLT_LogError(format,...)
#define YLT_Log(format,...)
#endif

//当前语言
#define YLT_CurrentLanguage [[NSLocale preferredLanguages] objectAtIndex:0]
//info.plist 文件信息
#define YLT_InfoDictionary [[NSBundle mainBundle] infoDictionary]
//当前应用程序的 bundle ID
#define YLT_BundleIdentifier [[NSBundle mainBundle] bundleIdentifier]
// app名称
#define YLT_AppName [PH_InfoDictionary objectForKey:@"CFBundleDisplayName"]
//将URLTypes 中的第一个当做当前的回调参数
#define YLT_URL_SCHEME [[PH_InfoDictionary[@"CFBundleURLTypes"] firstObject][@"CFBundleURLSchemes"] firstObject]
// app版本
#define YLT_AppVersion [PH_InfoDictionary objectForKey:@"CFBundleShortVersionString"]
// app build版本
#define YLT_BuildVersion [PH_InfoDictionary objectForKey:@"CFBundleVersion"]
// iPhone 别名
#define YLT_PhoneName [[UIDevice currentDevice] name]
//当前Bundle
#define YLT_CurrentBundle [NSBundle bundleForClass:[self class]]
//主bundle
#define YLT_MainBundle [NSBundle mainBundle]

//颜色宏定义
#define YLT_RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define YLT_RGB(r,g,b) RGBA(r,g,b,1.0f)
#define YLT_HEXCOLOR(hex) [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:1]

#endif /* YLT_BaseMacro_h */
