//Realiza un programa que determine si un numero es par.

#include <iostream>

using namespace std;

int main(){

    int numero,resto;

    cout<<"Ingresa un numero ";
    cin>>numero;

    resto=numero%2;

    if(resto==0){
        cout<<"EL numero es par"<<endl;
    }else{
        cout<<"El numero es impar";
    }
    
    return 0;
}