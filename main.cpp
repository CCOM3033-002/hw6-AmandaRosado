/*
Amanda Rosado Rosado
801-23-8238
Asignacion 6: Figuras en 3D

Proposito:
Este programa que le pida al usuario que escoja entre las sigueintes figuras en 3 dimensiones:
cilindro, esfera, prisma rectangular. Luego le pregunte si quiere calcular el volumen
o el área de la superficie de la figura escogida. 
*/


#include <iostream>
#include <cmath>
using namespace std;






int main () {


    cout << "\nEste programa calcula el volumen y el área de la supercicie de tres figuras." << endl;

    cout << "\nEscoga una figura: "<< endl;
    cout << "a. Cilindro" << endl;
    cout << "b. Esfera" << endl;
    cout << "c. Prisma rectangular" << endl;
    cout << "\n";

    char Cilindro = 'a';
    char Esfera = 'b';
    char Prisma_Rectangular = 'c';
    char respuesta1;

    cin >> respuesta1;


    while (respuesta1 != 'a','b','c') {
        cout << "\nIncorrecto, respuesta debe de ser a, b o c, intente de nuevo: " << endl;
        cin >> respuesta1;
        if (respuesta1 == 'a','b','c') {
            break;
        }
    }


    cout << "\nEscoga entre los siguientes opciones: " << endl;
    cout << "a. Volumen" << endl;
    cout << "b. Área de la superficia" << endl;
    cout << "\n";

    char Volumen = 'a';
    char Area_De_Superficie = 'b';
    char respuesta2;

    cin >> respuesta2;


    while (respuesta2 != 'a', 'b') {
        cout << "\nIncorrecto, respuesta debe de ser letra a o b, intente de nuevo: " << endl;
        cin >> respuesta2;
        if (respuesta2 == 'a', 'b') {
            break;
        }
    }


    return 0;
}