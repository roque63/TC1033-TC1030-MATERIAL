//
//  Pizza.cpp
//  ClasesAbstractasPuras
//
//  Created by Ma. Guadalupe Roque  on 5/20/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#include "Pizza.hpp"

#include <iostream>
using namespace   std;

Pizza :: Pizza(): Alimento(){
    ingredienteExtra = "Trufa";
}

void Pizza :: dibuja(){
    cout << "🍕🍕🍕🍕" << endl;
}

