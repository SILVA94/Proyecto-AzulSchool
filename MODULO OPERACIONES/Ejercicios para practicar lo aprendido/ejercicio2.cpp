/* Escriba un programa que lea las tres notas de un alumno y calcule la nota final media
de dicho alumno ( Promedio). */


#include <iostream>

using namespace std;

int main(){

    float matematicas = 7, historia = 8, geografia = 10,promedio = 0;

    promedio=(matematicas+historia+geografia)/3;

    cout<<"El promedio del alumno es "<<promedio<<endl;
    return 0;
}