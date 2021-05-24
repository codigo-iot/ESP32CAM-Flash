//ESP32CAM flash
//Por: Hugo Vargas
//24 de mayo de 2021
//Creditos Moayom
//
//Este es el programa básico para controlar el
//LED Flash del ESP32CAM. Este programa parte del
//hecho de que cuentas con la base programadora.

//Definición de pines
#define LAMP 4 //Se selecciona 

//Inicialización del programa
void setup() //Estructura principal
{
  pinMode(LAMP, OUTPUT); //Configuración de pines. 2 parámetros, pin a configurar y estado (INPUT,INPUT_PULLUP,OUTPUT)
} //Fin de void setup ()

//Cuerpo del programa
void loop() //Función bucle
{
  digitalWrite (FLASH, HIGH); //Encender led. 2 parámetros, pin a controlar, estado (0,LOW,FALSE,1,HIGH,TRUE)
  delay (2000); //Espera de 2 segundos
  digitalWrite (FLASH, LOW); //Apagar led
  delay (2000); //Espera de 2 segundos
} //Fin de void loop()
