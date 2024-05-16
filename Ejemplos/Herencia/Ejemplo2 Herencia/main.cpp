//
//  main.cpp
//  Herencia-302
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/22.
//

#include <iostream>
#include "Persona.hpp"
#include "Estudiante.hpp"
#include "Medico.hpp"
int main() {
    Persona jorge;
    Estudiante valeria("Valeria Enriquez", 15, "ITC"), lupita;
    Medico drChapa("Fernando Contreras", 55, "Pediatra", 555555);
    
    cout << jorge.str() << endl;
    cout << valeria.str() << endl;
    cout << lupita.str() << endl;
    cout << drChapa.str() << endl;
    
    
    
    return 0;
}
