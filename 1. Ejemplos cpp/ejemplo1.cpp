//
//  main.cpp
//  Prueba1
//
//  Created by Ma. Guadalupe Roque Díaz de León on 31/10/22.
//

#include <iostream>
#include <string>
#include <math.h>

// añadir para no tener que poner std::cout, std::cin
using namespace std;

// firma de la función - la función retorna un valor double
// tipoDato nombreFuncion( int a, int b, int c, double precio)
double calcularPrecio( );
char leerGenero( );
void miInformacion( );

// int main( ) - indica que la función retorna un valor entero
int main( ) {
    // insert code here... endl - end line
    // Declaración de variables
    int num1, num2, pesoAdulto;
    string nombre, apellido;
    char genero = 'F', semestre = '1', salon = ' ';
    bool gano,  cargaCompleta, casado, soltero, acredito;
    double estatura, pesoBebe, precioProducto;
    float precioTacos;
    
    
    // 2º Leer los datos de entrada
    cout << "Ingresa un valor entero:"; // comentario de fin de linea
    cin >> num1;
    cout << "Ingresa un valor entero:";
    cin >> num2;
    
    
    // tipo de datos char - solo tiene un caracter y delimitado por apostrofos
    cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
    cout << "pow(" << num1 << ',' << num2 << ")=" << pow(num1, num2) << endl;
    cout << num1 << '/' << num2 << '=' << num1 / num2 <<  endl;
    cout << num1 << '/' << num2 << '=' << double(num1)/ num2 <<  endl;
    cout << num1 << '/' << num2 << '=' << num1/ double(num2) <<  endl;
    cout << "Muy buen día!\nGerardo\nDaniel\nAngela\nAlonso\nNatalia Guevara\nNatalia Olvera\n" << endl;
    
    // llamar a las funciones
    pesoBebe = calcularPrecio();
    genero = leerGenero();
    
    // desplegar los resultador
    cout << "Bebe =" << pesoBebe << ' ' << genero << endl;
    
    return 0;
}


double calcularPrecio( ){
    return 5.5;
}


char leerGenero( ){
    return 'm';
}

void miInformacion(){
    cout << "Ma. Guadalupe Roque\n";
}
