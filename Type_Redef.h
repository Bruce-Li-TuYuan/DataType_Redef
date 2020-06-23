/*************************************************
Copyright (C), 2003, HAC Tech. Co., Ltd.
File name: // 文件名
Author: // 作者
Version: // 版本
Date: // 完成日期
Chip/Mcu/Cpu: // 所用芯片(MCU、射频芯片等主要芯片)的描述
Development environment: // 关于所使用开发环境(包括开发环境的版本)的描述
Description: // 用于详细说明此程序文件完成的主要功能，与其他模块
// 或函数的接口，输出值、取值范围、含义及参数间的控
// 制、顺序、独立或依赖等关系
Others: // 其它内容的说明
Function List: // 主要函数列表，每条记录应包括函数名及功能简要说明
History: // 修改历史记录列表，每条修改记录应包括修改日期、修改者及修改内容简述
1. Author:
Version:
Date:
Modification:
2. ...
*************************************************/


#ifndef __TYPE_REDEF_H__
#define __TYPE_REDEF_H__

#ifdef __cplusplus
extern "C" {
#endif  

/*********************************************************************************************************
  类型重定义
*********************************************************************************************************/
typedef unsigned char       u8;
typedef signed char         s8;
typedef signed short        s16;
typedef unsigned short      u16;
typedef signed int          s32;
typedef unsigned int        u32;
typedef signed long long    s64;
typedef unsigned long long  u64;
typedef float               f32;
typedef double              d64;

#ifdef __cplusplus
}
#endif                                                                  /*  __cplusplus                 */

#endif                    

