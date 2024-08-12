//红外遥控
#include <IRremoteESP8266.h> // 引入 IRremoteESP8266 库
#include <IRrecv.h>  // 引入 IRrecv 类
#include <IRutils.h> // 引入 IRutils 工具类

// 定义红外接收模块连接的引脚
const int ir_recv_pin = 2;
IRrecv irrecv(ir_recv_pin); // 创建 IRrecv 对象
decode_results results;     // 创建 decode_results 对象