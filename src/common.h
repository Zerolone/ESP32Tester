//接D2
const char* VERSION = "1.1.6";

//是否显示调试信息
const int SHOWINFO = 1;

//自动重启标志
boolean restart = false;

int intReset = 0;
int intReal  = 0;

//是否休眠
int canTest = 0;

//主板类型设置
#ifdef BOARD_TYPE
    #if BOARD_TYPE == ESP32C3
        const char* BOARD   = "ESP32C3";
    #elif BOARD_TYPE == D1
        const char* BOARD   = "D1";
    #elif BOARD_TYPE == ESP8266
        const char* BOARD   = "ESP8266";
    #else
        const char* BOARD "未知";
    #endif
#else
    const char* BOARD   = "未定义";
#endif

#define intSerial 115200

WiFiClient   espClient;
PubSubClient client(espClient);

//启用webserver
AsyncWebServer server(80);
AsyncWebSocket ws("/ws");    // WebSocket对象，url为/

//OTA 在线更新
const char* OTAURL   = "/firmware.bin";
const char* OTAFSURL = "/spiffs.bin";

//可以通过webserver修改的内容
String ssid;
String pass;
String ip;
String gateway;
String ota;
String otahost;
String checkid;

//临时变量
char buffer[20];

//系统配置
const  char* sysPath = "/sys.txt";

IPAddress localIP;
IPAddress localGateway;
IPAddress subnet(255, 255, 255, 0);

//临时变量
String strTmp;
int    intTmp;
