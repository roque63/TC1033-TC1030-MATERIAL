//
//  Paquete.cpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Paquete.hpp"
#include "Envio.hpp"

Paquete::Paquete():Envio()
{
    profundidad = 100;
    peso = 1;
    costoXKg = 10;
}

Paquete::Paquete(Cliente re, Cliente de, int iLargo, int iAncho, int iProfundidad, double dPeso):Envio(re,de, iLargo, iAncho){
    profundidad = iProfundidad;
    peso = dPeso;
    costoXKg = 10;
}

int Paquete::calculaCosto(){
    return peso * costoXKg + costoEstandar;
}

string Paquete::str(){
    return "Paquete\n" +  Envio::str() + " D:" + to_string(profundidad)  + " w:" + to_string(peso) + " $K" + to_string(costoXKg);
}



void Paquete::setCostoXkg(int _costoXKg){
    costoXKg = _costoXKg;
}
