/* Escriba un programa en C++ que determine cuanto dinero puede ahorrarse cada mes para comprar un televisor.
El rpograma debera permitirle instorducir los gastos mensuales siguientes: gastos de la casa, gastos de comida,gastos de coche,
gasolina,seguro,gastos de ropa. Determine que podrá ahorrar 200 pesos cada mes para su televisor.
Unicamente cuando tenga al menos 300 pesos disponibles después de pagar todos los gastos.*/
#include <iostream>

using namespace std;

//gastos de la casa, gastos de comida,gastos de coche,
//gasolina,seguro,gastos de ropa

int main(){

    float Ahorro, Ingresos,Gastoscasa,Gastosgasolina,Gastoscomida,Gastoscoche,Gastosseguro,Gastosropa,Gastostotales;

    cout<<"Ingresa ingresos ";
    cin>>Ingresos;

    cout<<"Ingresa gastos de la casa ";
    cin>>Gastoscasa;

    cout<<"Ingresa gastos de gasolina ";
    cin>>Gastosgasolina;

    cout<<"Ingresa gastos de comida ";
    cin>>Gastoscomida;

    cout<<"Ingresa gastos de coche ";
    cin>>Gastoscoche;

    cout<<"Ingresa gastos de seguro ";
    cin>>Gastosseguro;

    cout<<"Ingresa gastos de ropa ";
    cin>>Gastosropa;

    Gastostotales= Gastoscasa+Gastosgasolina+Gastoscomida+Gastoscoche+Gastosseguro+Gastosropa;

    Ahorro=Ingresos-Gastostotales;

    cout<<"Los ingresos de este mes son: "<<Ingresos<<endl;

    cout<<"Este mes gastaste: "<<Gastostotales<<endl;

    cout<<"Este mes ahorraste: "<<Ahorro<<endl;

    if(Ahorro>=300){

    cout<<"Este mes puedes ahorrar para el televisor"<<endl;
    }
    else
    {
    cout<<"No puedes ahorrar para el televisor";
    }
    return 0;

}
