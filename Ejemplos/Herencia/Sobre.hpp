//
//  Sobre.hpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Sobre_hpp
#define Sobre_hpp

#include <stdio.h>

#include "Envio.hpp"
#include "Cliente.hpp"

class Sobre:public Envio{
private:
    int cargoAdicional = 30;
public:
    Sobre();
    Sobre(Cliente, Cliente, int, int);
    double calculaCosto();
    string str();
};

#endif /* Sobre_hpp */
