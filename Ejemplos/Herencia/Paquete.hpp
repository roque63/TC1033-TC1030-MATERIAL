//
//  Paquete.hpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Paquete_hpp
#define Paquete_hpp

#include <stdio.h>
#include "Cliente.hpp"
#include "Envio.hpp"
class Paquete : public Envio
{
private:
    int profundidad;
    int peso;
    int costoXKg;
    
public:
    Paquete();
    Paquete(Cliente, Cliente, int, int, int, double);
    int calculaCosto();
    string str();
    
    void setCostoXkg(int _costoXKg);
    
};

#endif /* Paquete_hpp */
