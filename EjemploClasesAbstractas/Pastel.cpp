//
//  Pastel.cpp
//  ClasesAbstractasPuras
//
//  Created by Ma. Guadalupe Roque  on 5/20/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Pastel.hpp"
#include <iostream>
using namespace   std;

Pastel :: Pastel():Alimento(){
    relleno = "Mermelada de Fresas de Irapuato";
}

void   Pastel :: dibuja(){
    cout << "🍓🎂🍓" << endl;
}




