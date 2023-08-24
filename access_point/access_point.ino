#include <ESP8266WiFi.h>

#define LED 2
#define SSID "NodeMCU"
#define PASSWORD "ESP@2020"
#define CHANNEL 1;
#define HIDDEN 0;
#define MAX_CNX 2;
#define BEACON_INTERVAL 100;

// IPv4 Address. . . . . . . . . . . : 192.168.11.105
// Subnet Mask . . . . . . . . . . . : 255.255.255.0
// Default Gateway . . . . . . . . . : 192.168.11.1

IPAddress local_IP(192,168,1,22);
IPAddress gateway(192,168,1,5);
IPAddress subnet(255,255,255,0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // WiFi.softAP(SSID, PASSWORD);

  Serial.print("Setting up Access Point ... ");
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet) ? "Ready" : "Failed");

  Serial.print("Setting AP ... ");
  Serial.println(WiFi.softAP(SSID, PASSWORD) ? "Ready" : "Failed");
  
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("No. of connections: ");
  Serial.println(WiFi.softAPgetStationNum());
  delay(60000);
}
