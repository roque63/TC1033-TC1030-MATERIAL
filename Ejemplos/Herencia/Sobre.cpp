//
//  Sobre.cpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Sobre.hpp"

Sobre::Sobre():Envio(){
    cargoAdicional = 30;
}

Sobre::Sobre(Cliente rem, Cliente dest, int iLargo, int iAncho): Envio(rem, dest, iLargo, iAncho){
    cargoAdicional = 30;
}

double Sobre::calculaCosto(){
    if (largo > 25  && ancho > 30)
    {
        return cargoAdicional + costoEstandar;
    }
    return costoEstandar;
}

string Sobre::str(){
    return "Sobre\n" + Envio::str() + " $" + to_string(cargoAdicional);
}


