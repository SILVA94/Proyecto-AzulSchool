//Escriba un programa que solicite la edad,el sexo y pais de una persona e imprima si es mayor de edad, su sexo y su ciudad.

#include<iostream>


using namespace std;

int main(){

    int edad,pais,sexo;

    cout<<"Ingrese edad: ";
    cin>>edad;

    cout<<"Ingrese sexo (1.- Es masculino, 2.- Es femenino): ";
    cin>>sexo;

    cout<<"Ingrese pais (1.-Mexico,2.-Colombia,3.- Peru): ";
    cin>>pais;

    if(edad>=18){
        if(sexo==1){
            cout<<endl<<"Es mayor de edad. ";
            cout<<endl<<"Su sexo es Masculino. ";
        } else{
            cout<<endl<<"Es mayor de edad. ";
            cout<<endl<<"Su sexo es Femenino. ";
        }
    }else {
        if(sexo==2){
         cout<<endl<<"Es menor de edad . ";
         cout<<endl<<"Su sexo es Femenino. ";  
        }else{
            cout<<endl<<"Es menor de edad. ";
            cout<<endl<<"Su sexo es Masculino. ";
        }
    }
    
    if (pais==1){
        cout<<endl<<"Eres de Mexico";
    }else if(pais==2){
        cout<<endl<<"Eres de Colimbia";
    }else {
        cout<<endl<<"Eres de Peru";
    }

    return 0;
}
    
