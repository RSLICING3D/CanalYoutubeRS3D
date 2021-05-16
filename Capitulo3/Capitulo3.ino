/*****************************************************************************************************
 *  Capitulo 3 de Curso de Arduino                                                                   *
 *  Programa que utiliza un Boton para                                                               *
 *  para encender un LED                                                                             *
 *                                                                                                   *
 *  Autor: RSLICING3D                                                                                *
 *  Documentacion: https://www.rslicing3d.com/programacion-arduino-complementos/entradas-digitales/  *
 *****************************************************************************************************/

int led = 10;     // Identificamos la salida Digital D10 como led
int boton = 7; // Identificamos la salida Digital D7 como nuestro boton

void setup() {  
  pinMode(led,OUTPUT)         // Con pinMode declaramos que Led(D10) sera una Salida
  pinMode(boton,INPUT_PULLUP) // Con pinMode declaramos que Boton(D7) sera una Entrada activando la resistencia interna de nuestro arduino

}

void loop() {             // Void Loop mantiene un ciclo indefinido por lo que repetira esta rutina de forma "Infinita"
  if( digitalRead(boton) == true ){
    digitalWrite(led,HIGH); // Con la instruccion anterior le indicamos a Arduino que debera suministrar 5v a la salida D10

  }else{
      digitalWrite(led,LOW); // Con la instruccion anterior le indicamos a Arduino que debera suministrar 0v a la salida D10
   }
  }
}
