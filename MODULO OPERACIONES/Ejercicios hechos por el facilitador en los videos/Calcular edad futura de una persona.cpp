/* Escriba un programa en C++ que calcule la edad que tendra el dia de su cumpleaños del año 2020.
Asigne valores apropiados a su edad y al año actual*/

#include<iostream>

using namespace std;

int main(){

    int edadA = 26, edadF = 0, fechaA = 2020, fechaF = 2024;

    edadF= edadA+(fechaF-fechaA);

    cout<<"La edad de una persona de 26 años en el año 2024 es "<<edadF<<endl;



    return 0;
}