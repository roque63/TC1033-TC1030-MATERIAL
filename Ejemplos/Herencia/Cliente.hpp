//
//  Cliente.hpp
//  TareaHerenciaOpcional
//
//  Created by Invitado on 5/19/20.
//  Copyright © 2020 Invitado. All rights reserved.
//

#ifndef Cliente_hpp
#define Cliente_hpp
#include <string>
using namespace std;

class Cliente{
public:
    string nombre;
    string direccion;
    string ciudad;
    string estado;
    string codigoPostal;
    
    Cliente();
    Cliente(string, string, string, string, string);
    
    string str();
    
    void setNombre(std::string _nombre);
};

#endif /* Cliente_hpp */
