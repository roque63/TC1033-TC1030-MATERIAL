//
//  main.cpp
//  TareaHerenciaOpcional
//
//  Created by Ma. Guadalupe Roque on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include <iostream>
#include "Paquete.hpp"
#include "Sobre.hpp"
// calculaCosto del Paquete es :  peso * costoXKg + costoEstandar;
// calculaCosto del Sobre  es : cargo adicional siempre son $30
//          if (largo > 25  && ancho > 30) entonces el costo es cargoAdicional + costoEstandar;
//              sino entonces se cobra el  costoEstandar;
// En Envio el costoEstandar siempre tiene el valor 100
//
using namespace std;
void despliega(Paquete p1, Paquete p2,  Sobre s1){
    cout << p1.str() << '$' << p1.calculaCosto() << endl;
    cout << p2.str() << '$' << p2.calculaCosto() << endl;
    cout << s1.str() << '$' << s1.calculaCosto()<<endl;
}

int main() {
    int largo, ancho, peso, costoXKg;
    
    Cliente c1, c2{"Rafa","Itesm","Mty","N.L.","6502"};
    Paquete carro{c1,c2,500,500,500,500}, libro{c2, c1, 10, 30, 50, 50};
    Sobre carta(c2, c1, 30,50);
    // str() solo despliega la información del objeto, luego se llama al método calcula costo

    despliega(carro, libro, carta);
    
    cin >> largo >> ancho >> peso >> costoXKg;
 
    carro.setAncho(ancho);
    carro.setLargo(largo);
    carro.setCostoXkg(costoXKg);
    
    carta.setLargo(largo);
    carta.setAncho(ancho);
    
    libro.setCostoXkg(costoXKg);
    libro.setLargo(largo);
    libro.setAncho(ancho);
    
    
    
    despliega(carro, libro, carta);
    

    
    return 0;
}
/*
 Salida:
 
 Paquete
 R:Ma. Guadalupe Roque,Av. Eugenio Garza Sada #501,Monterrey,N.L.,65000
 D:Rafael,Itesm,Mty,N.L.,6502
 L:500 A:500 D:500 w:500 $K10$5100
 Paquete
 R:Rafael,Itesm,Mty,N.L.,6502
 D:Ma. Guadalupe Roque,Av. Eugenio Garza Sada #501,Monterrey,N.L.,65000
 L:10 A:30 D:50 w:50 $K10$600
 Sobre
 R:Rafael,Itesm,Mty,N.L.,6502
 D:Ma. Guadalupe Roque,Av. Eugenio Garza Sada #501,Monterrey,N.L.,65000
 L:30 A:50 $30$130
 
 */
