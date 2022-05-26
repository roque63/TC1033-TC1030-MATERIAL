//
//  Cliente.cpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Cliente.hpp"

#include <stdio.h>

Cliente::Cliente(){
    nombre = "Lupita";
    direccion = "Av. Eugenio Garza Sada #501";
    ciudad = "Monterrey";
    estado = "N.L.";
    codigoPostal = "65000";
}

Cliente :: Cliente (string n, string d ="La Luz #45", string c="MTY", string e="NL", string cp="7890")
{
    nombre = n;
    direccion = d;
    ciudad = c;
    estado = e;
    codigoPostal = cp;
}

string Cliente::str(){
    return  nombre + ',' +direccion + ',' + ciudad + ',' + estado + ','  + codigoPostal;
}

void Cliente::setNombre(std::string _nombre){
    nombre = _nombre;
}

