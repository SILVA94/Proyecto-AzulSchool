/* La calificación final de un estudiante es el promedio de tres notas: 
La nota de prácticas que cuenta con un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10%. Escriba un programa que lea las tres notas del alumno
y escriba su nota final */

#include <iostream>

using namespace std;

int main(){

    float practicas = 10, teorica = 0, participacion = 10,notaF = 0;

    notaF=(practicas*.3)+(teorica*.6)+(participacion*.1);

    cout<<notaF<<endl;
    
    return 0;
}