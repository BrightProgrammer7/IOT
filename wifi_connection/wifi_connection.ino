// #include <dummy.h>
#include <ESP8266WiFi.h>
// #include <ATCommands.h>

// #define LED 2
// #define SSID "WARRIOR"
// #define PASSWORD "Vecna@2022"

const char* ssid = "WARRIOR";
const char* password = "Vecna@2022";
int LedPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, LOW);
  Serial.begin(9600);
  // digitalWrite(LED, LOW);
  // pinMode(LED, OUTPUT);
  
  WiFi.mode(WIFI_STA);
  // WiFi.begin(SSID, PASSWORD);
  WiFi.begin(ssid, password);

  Serial.println("begin Connecting\n");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.println(".");
    delay(500);
  }
  // Serial.println("begin Connecting\n");

  Serial.print("Connected To WiFi: ");
  Serial.print(ssid);
  Serial.print("\nNodeMCU IP Address: ");
  Serial.print(WiFi.localIP());
  // Connected To: WARRIOR , IP Address: 192.168.11.111

  // AT.begin(&Serial, commands, sizeof(commands), WORKING_BUFFER_SIZE);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(LED, HIGH);
  // Serial.println("LED is on");
  // delay(1000);

  // digitalWrite(LED, LOW);
  // Serial.println("LED is off");
  // delay(1000);
  // AT.update();
}