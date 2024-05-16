//
//  Estudiante.hpp
//  Herencia-302
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/22.
//

#ifndef Estudiante_hpp
#define Estudiante_hpp

#include <stdio.h>

#include "Persona.hpp"
// clase derivada de la clase Persona

class Estudiante : public Persona {
public:
    Estudiante();
    Estudiante(string _nombre, int _edad, string _carrera);
    
    string getCarrera();
    void setCarrera(string _carrera);
    
    string str();
    
private:
    string carrera;
};


#endif /* Estudiante_hpp */
