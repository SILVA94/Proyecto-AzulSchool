//Escribe un programa en C++ que solicite al usuario su edad y determine si es Mayor o menor de edad.

#include <iostream>

using namespace std;

int main(){
    
    int edad;

    cout<<"Ingresa tu edad ";
    cin>>edad;

    if(edad>=18){
        cout<<"Eres mayor de edad. Puedes votar";
    }else
    {
        cout<<"No eres mayor de dad. No puedes votar";
    }


    return 0;
}