//Contributed by ShripadJagtap & Phantonym21
#include <Wire.h>
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
void setup() {
  Serial.begin(9600);  
  mlx.begin();  
}
void loop() {
 
Serial.print("Temperature : ");
Serial.print(mlx.readObjectTempC()); 
Serial.println(" Celsius");
 
Serial.print("Temperature : "); 
Serial.print(mlx.readObjectTempF());
Serial.println(" Fahrenheit");

Serial.println();
delay(500);
}