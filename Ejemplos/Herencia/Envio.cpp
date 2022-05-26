//
//  Envio.cpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Envio.hpp"

Envio::Envio(){
    costoEstandar = 100;
    largo = 0;
    ancho = 0;
}

Envio::Envio(Cliente rem, Cliente des, int largo, int a){
    remitente = rem;
    destinatario = des;
    costoEstandar = 100;
    this->largo = largo;
    ancho = a;
}

double Envio::calculaCosto(){
    return costoEstandar;
}

string Envio::str(){
    
return   "R:" + remitente.str() + "\nD:" + destinatario.str() + "\nL:" + to_string(largo) + " A:" + to_string(ancho)  ;
}


void Envio::setCostoEstandar(int _costoEstandar){
    costoEstandar = _costoEstandar;
}
void Envio::setLargo(int _largo){
    largo = _largo;
}
void Envio::setAncho(int _ancho){
    ancho = _ancho;
}
