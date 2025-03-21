
 
#ifndef __LVGL_DEMO_H
#define __LVGL_DEMO_H

#include "lvgl.h"

/* 函数声明 */
void lvgl_demo(void);                                                                               /* lvgl_demo入口函数 */
void lv_port_disp_init(void);                                                                       /* 初始化并注册显示设备 */
void lv_port_indev_init(void);                                                                      /* 初始化并注册输入设备 */
#endif
