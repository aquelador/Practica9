/* PRÁCTICA 9 SAIDAS DIXITAIS I 
Imos facer a primeira montaxe en TinkerCAD con un 
Arduíno. Selecciona unha das montaxes xa feitas, 
preferiblemente a que incorpora unha placa protoboard
e un Arduíno. 
Se lle dás a iniciar simulación, verás que se 
encende o LED amarelo da placa Arduíno. Iso
é porque xa ten un programa preestablecido. 
Se premes en 'código', verás que aparece 
un programa feito con bloques. Se a continuación 
seleccionas 'código + texto', verás o 
equivalente en linguaxe Sketch (C de Arduíno). 
Se modificas o tempo de espera entre 
encendido e apagado para outro valor, verás que 
se modifica tamén no código en texto.
Engade un LED en serie cunha resistencia 
(recoméndase 220 Ω) e conecta o 
positivo ao pin 13 do Arduíno. Recorda pechar o 
circuíto a GND ou negativo. O pin 13 ten 
a particularidade de estar conectado co LED da 
placa, polo que o que faga o LED da 
placa, será reproducido polo que fagao o da 
protoboard
*/



// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
