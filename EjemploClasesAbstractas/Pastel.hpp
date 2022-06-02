//
//  Pastel.hpp
//  ClasesAbstractasPuras
//
//  Created by Ma. Guadalupe Roque  on 5/20/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Pastel_hpp
#define Pastel_hpp

#include <stdio.h>

#include <string>
using namespace std;
#include "Alimento.hpp"

class Pastel : public Alimento{
private:
    string relleno;
public:
    Pastel();
    void dibuja();
};


#endif /* Pastel_hpp */
