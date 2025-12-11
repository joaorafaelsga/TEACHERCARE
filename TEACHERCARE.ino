#define BLYNK_TEMPLATE_ID "TMPL2Nh4bhIcl"
#define BLYNK_TEMPLATE_NAME "sensor batimento"
#define BLYNK_AUTH_TOKEN "e1JanHvGhnI3rzASSdUHBVblgzuXK_vQ"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include <Wire.h>
#include "MAX30105.h"
#include "heartRate.h"

MAX30105 particleSensor;

const byte RATE_SIZE = 4;
byte rates[RATE_SIZE];
byte rateSpot = 0;
long lastBeat = 0;

float beatsPerMinute = 0;
int beatAvg = 0;

// ---- CONFIG WIFI + BLYNK ----
char ssid[] = "uaifai-tiradentes";
char pass[] = "bemvindoaocesar";

BlynkTimer timer;

// ---------- Função que envia para o Blynk ----------
void enviarBlynk()
{
  Blynk.virtualWrite(V3, beatsPerMinute);      // BPM atual
  Blynk.virtualWrite(V1, beatAvg);             // Média BPM
  Blynk.virtualWrite(V2, particleSensor.getIR()); // IR

  Serial.println("Enviado ao Blynk.");
}

void setup()
{
  Serial.begin(115200);
  Serial.println("Iniciando...");

  // Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // MAX30102
  if (!particleSensor.begin(Wire, I2C_SPEED_FAST))
  {
    Serial.println("MAX30102 não encontrado.");
    while (1);
  }

  Serial.println("Coloque o dedo no sensor.");

  particleSensor.setup();
  particleSensor.setPulseAmplitudeRed(0x0A);
  particleSensor.setPulseAmplitudeGreen(0);

  // Enviar dados ao Blynk a cada 1 segundo
  timer.setInterval(1000L, enviarBlynk);
}

void loop()
{
  Blynk.run();
  timer.run();

  long irValue = particleSensor.getIR();

  // Detecta batida
  if (checkForBeat(irValue))
  {
    long delta = millis() - lastBeat;  
    lastBeat = millis();

    // ---- CÁLCULO CORRETO DO BPM ----
    beatsPerMinute = 60000.0 / delta;

    // Filtra valores absurdos
    if (beatsPerMinute < 255 && beatsPerMinute > 20)
    {
      rates[rateSpot++] = (byte)beatsPerMinute;
      rateSpot %= RATE_SIZE;

      // Média suavizada
      beatAvg = 0;
      for (byte x = 0; x < RATE_SIZE; x++)
        beatAvg += rates[x];

      beatAvg /= RATE_SIZE;
    }
  }

  Serial.print("IR=");
  Serial.print(irValue);
  Serial.print(" BPM=");
  Serial.print(beatsPerMinute);
  Serial.print(" Média=");
  Serial.print(beatAvg);

  if (irValue < 50000)
    Serial.print(" Sem dedo?");

  Serial.println();
}
