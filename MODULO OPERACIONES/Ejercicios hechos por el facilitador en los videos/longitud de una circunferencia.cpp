/* Escriba un programa en C++ que calcule la longitud de una circuferencia de radio 15.
La formula para hallar la circunferencia es la siguiente: Longitud = 2 * PI * r,
siendo 3.1416 el valor de PI y siendo r el radio de la circunferencia. */



#include<iostream>

using namespace std;

int main(){

    float PI = 3.1416;
    int radio = 15;
    float circunferencia = 0;

    circunferencia=2 * PI * radio;

    cout<<"La longitud de una circunferencia es "<<circunferencia<<endl;




    return 0;

}