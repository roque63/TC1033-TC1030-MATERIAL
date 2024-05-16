//
//  Estudiante.cpp
//  Herencia-302
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/22.
//

#include "Estudiante.hpp"

//
//  Estudiante.cpp
//  Herencia
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/22.
//

#include "Estudiante.hpp"

Estudiante::Estudiante( ) : Persona( ) {
    carrera = "Chef"; }

//Para llamar al constructor default de la clase base.
Estudiante::Estudiante(string _nombre, int _edad, string _carrera) : Persona(_nombre,_edad) {
    carrera = _carrera; }

string Estudiante::getCarrera() {
    return carrera;
}

void Estudiante::setCarrera(string _carrera) {
    carrera = _carrera;
}
string Estudiante::str() {
    return "Nombre: " + nombre + " edad: " + to_string(edad) +
    " Carrera: " + carrera ;
}
