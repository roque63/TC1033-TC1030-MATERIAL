//
//  Pizza.hpp
//  ClasesAbstractasPuras
//
//  Created by Ma. Guadalupe Roque  on 5/20/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp
#include <stdio.h>
#include "Alimento.hpp"

class Pizza: public Alimento{
private:
    string ingredienteExtra;
public:
    Pizza();
    void dibuja();
};


#endif /* Pizza_hpp */
