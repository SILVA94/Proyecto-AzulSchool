/* Crea un programa que realiza las operaciones basicas de una calculadora
(+,-,*,/) usando switch. */

#include <iostream>

using namespace std;

int main()
{
    double numero1,numero2,operacion;
    char opcion;
    
    cout<<"Para sumar +"<<endl<<"Para restar -"<<endl<<"Para multiplicar *"<<endl<<"Para dividir /"<<endl;
    cout<<"Ingresa la opcion a realizar ";
    cin>>opcion;
    
    
    switch(opcion){
        case '+':
        cout<<"Ingresa numero 1"<<endl;
        cin>>numero1;
        cout<<"Ingresa numero 2"<<endl;
        cin>>numero2;
        operacion=numero1+numero2;
        cout<<"El resultado de sumar "<<numero1<<" más "<<numero2<<" es "<<operacion;
        break;
        case '-':
        cout<<"Ingresa numero 1"<<endl;
        cin>>numero1;
        cout<<"Ingresa numero 2"<<endl;
        cin>>numero2;
        operacion=numero1-numero2;
        cout<<"El resultado de restar "<<numero1<<" a "<<numero2<<" es "<<operacion;
        break;
        case '*':
        cout<<"Ingresa numero 1"<<endl;
        cin>>numero1;
        cout<<"Ingresa numero 2"<<endl;
        cin>>numero2;
        operacion=numero1*numero2;
        cout<<"El resultado de multiplicar "<<numero1<<" por "<<numero2<<" es "<<operacion;
        break;
        case '/':
        cout<<"Ingresa numero 1"<<endl;
        cin>>numero1;
        cout<<"Ingresa numero 2"<<endl;
        cin>>numero2;
        operacion=numero1/numero2;
        cout<<"El resultado de dividir "<<numero1<<" entre "<<numero2<<" es "<<operacion;
        break;
    }
    
    return 0;
   
}

