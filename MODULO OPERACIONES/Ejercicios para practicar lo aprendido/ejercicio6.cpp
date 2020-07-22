/* Crea un programa que imprima el resultado del siguiente problema:
Dos personas ganan entre los dos un total de $3000.
¿Si una gana $500 más que otra, cuánto gana cada una? NOTa: p1=(3000+500)/2,p2)3000-p1. */

#include <iostream>

using namespace std;

int main (){

    int p1=0,p2=0;

    p1=(3000+500)/2;
    p2=3000-p1;

    cout<<"Persona 1 gana $"<<p1<<endl;
    cout<<"Persona 2 gana $"<<p2<<endl;
    return 0;
}