//
//  Alimento.hpp
//  ClasesAbstractasPuras
//
//  Created by Ma. Guadalupe Roque  on 5/20/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Alimento_hpp
#pragma once
#include <string>
using namespace std;
#include <stdio.h>

class Alimento{
public:
    string ingrediente1;
    string ingrediente2;
    int precio;
    Alimento();
    // Funcion virtual pura - funcion abstracta
    virtual void dibuja() = 0;
};

#endif /* Alimento_hpp */
