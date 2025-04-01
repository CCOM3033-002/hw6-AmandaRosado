/*
Amanda Rosado Rosado
801-23-8238
Asignacion 6: Figuras en 3D

Proposito:
Este programa que le pida al usuario que escoja entre las sigueintes figuras en 3 dimensiones:
cilindro, esfera, prisma rectangular. Luego le pregunte si quiere calcular el volumen
o el área de la superficie de la figura escogida. 
*/

//Librerias utilizadas en el programa
#include <iostream>
#include <cmath>
using namespace std;


double volumen(double radio, double altura);

double area_superficie(double radio2, double altura2);



//Se crea funcion main
int main () {


    //Se le deja saber el proposito del programa al usuario
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


    //Mientras su respuesta no sea a, b o c, el ciclo se repetira hasta que se le de una respuesta valida
    while (respuesta1 != 'a' && respuesta1 != 'b' && respuesta1 != 'c') {
        cout << "\nIncorrecto, respuesta debe de ser a, b o c, intente de nuevo: " << endl;
        cin >> respuesta1;
    }


    cout << "\nEscoga entre los siguientes opciones: " << endl;
    cout << "a. Volumen" << endl;
    cout << "b. Área de la superficia" << endl;
    cout << "\n";

    char Volumen = 'a';
    char Area_De_Superficie = 'b';
    char respuesta2;

    cin >> respuesta2;


    //Mientras su respuesta no sea a o b, el ciclo se repetira hasta que se le de una respuesta valida
    while (respuesta2 != 'a' && respuesta2 != 'b') {
        cout << "\nIncorrecto, respuesta debe de ser letra a o b, intente de nuevo: " << endl;
        cin >> respuesta2;
    }



    if (respuesta1 == 'a' && respuesta2 == 'a') {

        double radio, altura;

        cout << "\nIngrese el radio del cilindro: " << endl;
        cin >> radio;

        cout << "\nIngrese la altura del cilindro: " << endl;
        cin >> altura;
    
        cout << "\nEl volumen del cilindro es: " << volumen(radio, altura) << endl;
     }



    if (respuesta1 == 'a' && respuesta2 == 'b') {

        double radio2, altura2;

        cout << "\nEntre el radio de su cilindro: " << endl;
        cin >> radio2;

        cout << "\nEntre la altura de su cilindro: " << endl;
        cin >> altura2;

        cout << "\nEl area de superficie de su cilindro es: " << area_superficie(radio2, altura2) << endl;
    }






    return 0;
}


//Funcion para calcular el volumen de un cilindro
double volumen(double radio, double altura) {

    return (M_PI * pow(radio, 2) * altura);
}


//Funcion para calcular el area de superficie de un cilindro
double area_superficie(double radio2, double altura2) {

    return (2 * M_PI * radio2 * altura2 + 2 * M_PI * pow(radio2, 2));
}