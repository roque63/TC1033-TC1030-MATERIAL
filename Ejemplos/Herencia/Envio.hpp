//
//  Envio.hpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Envio_hpp
#define Envio_hpp

#include <stdio.h>
#include "Cliente.hpp"
class Envio{
protected:
    Cliente remitente;
    Cliente destinatario;
    int costoEstandar;
    int largo;
    int ancho;
public:
    Envio();
    Envio(Cliente, Cliente, int, int);
    double calculaCosto( );
    string str();
    
    void setCostoEstandar(int _costoEstandar);
    void setLargo(int _largo);
    void setAncho(int _ancho);
    
};
#endif /* Envio_hpp */
