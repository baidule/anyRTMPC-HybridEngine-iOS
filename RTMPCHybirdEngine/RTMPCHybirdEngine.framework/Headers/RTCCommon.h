#ifndef __RTC_COMMON_H__
#define __RTC_COMMON_H__

typedef enum AnyRTCErrorCode {
    AnyRTC_OK = 0,				// 正常
    AnyRTC_UNKNOW = 1,			// 未知错误
    AnyRTC_EXCEPTION = 2,		// SDK调用异常
    AnyRTC_NET_ERR = 100,		// 网络错误
    AnyRTC_LIVE_ERR = 101,		// 直播出错
    AnyRTC_BAD_REQ = 201,		// 服务不支持的错误请求
    AnyRTC_AUTH_FAIL = 202,		// 认证失败
    AnyRTC_NO_USER = 203,		// 此开发者信息不存在
    AnyRTC_SQL_ERR = 204,		// 服务器内部数据库错误
    AnyRTC_ARREARS = 205,		// 账号欠费
    AnyRTC_LOCKED = 206,		// 账号被锁定
    AnyRTC_FORCE_EXIT = 207		// 强制离开
}AnyRTCErrorCode;

typedef enum RTCVideoLayout
{
    RTC_V_1X3 = 0 ,       // Default - One big screen and 3 subscreens
    RTC_V_3X3_auto,       // All screens as same size & auto layout
}RTCVideoLayout;

typedef enum RTCScreenOrientation{
    RTC_SCRN_Portrait = 0,
    RTC_SCRN_LandscapeRight,
    RTC_SCRN_PortraitUpsideDown,
    RTC_SCRN_LandscapeLeft,
    RTC_SCRN_Auto
}RTCScreenOrientation;

#endif	// __RTC_COMMON_H__
