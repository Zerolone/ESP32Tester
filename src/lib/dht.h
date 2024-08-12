//DHT部分
#include <DHT.h>

String dhtInfo = "";
int    dhtRun  = 0;

void getDHT(){
  DHT dht(4, DHT11);
  dht.begin();

  float humidity    = dht.readHumidity();
  float temperature = dht.readTemperature();

  // 检查读取是否成功
  if (isnan(humidity) || isnan(temperature)) {
    dhtInfo= "无法从DHT传感器读取数据！";
  }else{
    dhtInfo = "温度: " + String(temperature) + " °C, 湿度: " + String(humidity) + " %";
  }
  Serial.println(dhtInfo);
}
