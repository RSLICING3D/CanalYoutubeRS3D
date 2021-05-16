/**********************************************
 *  Capitulo 2 de Curso de Arduino            *
 *  Programa que utiliza la salida digital D3 *
 *  para mantener encendido o apagado un LED. *
 *                                            *
 *  Autor: RSLICING3D                         *
 *                                            *
 *********************************************/

int led = 3; // Identificamos la salida Digital D3 como led

void setup() {  
  pinMode(led,OUTPUT) // Con pinMode declaramos que Led(D3) sera una Salida
  

}

void loop() {             // Void Loop mantiene un ciclo indefinido por lo que repetira esta rutina de forma "Infinita"
  digitalWrite(led,HIGH); // Con la instruccion anterior le indicamos a Arduino que debera suministrar 5v a la salida D3
  delay(1000);            // Con la instruccon delay le indicamos al arduino que debe esperar 1seg (Esto mantiene el Led Encendido)
  digitalWrite(led,HIGH); // Con la instruccion anterior le indicamos a Arduino que debera suministrar 0v a la salida D3
  delay(1000);            // Con la instruccon delay le indicamos al arduino que debe esperar 1seg (Esto mantiene el Led Apagado)
}
