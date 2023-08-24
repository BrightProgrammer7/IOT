// #include <dummy.h>
#include <Arduino.h>
// #include <ATCommands.h>
#define LED 2

// bool at_command(ATCommands *sender) {
//   static at_command_t commands[] = {
//     // { "+PRINT", at_run_cmd_print, at_test_cmd_print, at_read_cmd_print, at_write_cmd_print },
//   };
// }

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  Serial.print("begin\n");
  delay(5000);
  // AT.begin(&Serial, commands, sizeof(commands), WORKING_BUFFER_SIZE);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  // Serial.println("LED is on");
  Serial.println(50);
  delay(1000);
  
  digitalWrite(LED, LOW);
  // Serial.println("LED is on");
  Serial.println(0);
  delay(1000);

  // AT.update();
}