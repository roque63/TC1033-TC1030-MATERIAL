//
//  Persona.hpp
//  Herencia-302
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/22.
//

// Header guard - muy importantes
#ifndef Persona_hpp
#define Persona_hpp
#include <stdio.h>

#include <iostream>
using namespace std;

class Persona {
public:
    // Constructor default y parámetros
    Persona();
    Persona(string _nombre, int _edad);
    
    // gets
    string getNombre();
    int getEdad();
    
    // sets
    void setNombre(string _nombre);
    void setEdad(int _edad);
    
    // concatenar toda la info. y la retorna
    string str();
    
protected:
    string nombre;
    int edad;

};






#endif /* Persona_hpp */
