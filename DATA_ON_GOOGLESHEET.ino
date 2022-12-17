/*
   Created on Mon Jun 14 14:37:50 2021
   @author: Raj Mehta
*/


#include <WiFi.h>
#include <WiFiClientSecure.h>
String readString;
#include <HTTPClient.h>

HTTPClient http;

// Editing Point 1
const char* ssid = "YOUR_SSID";
// Editing Point 2
const char* password = "YOUR_PASS";

const char* host = "script.google.com";
const int httpsPort = 443;
const char* fingerprint = "46 B2 C3 44 9C 59 09 8B 01 B6 F8 BD 4C FB 00 74 91 2F EF F6";
// Editing Point 3
String GAS_ID = "AKfycbz-1nYyhmMeGI7A2qTCVvdotDNcHCwA8_mcLoAj5_ql27kuYsve";  // Replace by your GAS service id

void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  // Editing Point 4
  sendData(111, 111, 111); // Send test data
}
void loop()
{
  int a, b, c;
  sendData(1, 3, 5);
  Serial.println("///////////////////////////////////////////////////////////////////////////");
  delay(50000);
}
