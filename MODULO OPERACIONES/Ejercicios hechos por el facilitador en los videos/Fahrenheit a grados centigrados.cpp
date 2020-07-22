/* Escriba un programa en C++ que convierta una temperatura de 86 grados Farenheit a su equivalente en grados centrigrados.
La formula para convertir es grados Farenheit a grados centigrados es la siguiente: 
Centigrados = (5/9) (Farenheit-32).*/

#include <iostream>

using namespace std;

int main(){
    
   //Mi primer forma de resolvero.
    int  farenheit = 86,centigrados = 0;;
    

    centigrados=(5.0/9) * (farenheit-32);

    cout<<farenheit<<" grados Farenheit son "<<centigrados<<" grados centigrados"<<endl;


    return 0;

    /*

    //Codigo de azul school.

    int gradosF = 86, gradosC=0;

    gradosC=(5.0/9)*(gradosF-32);
    cout<<gradosF<<" grados farenheit son igual a "<<gradosC<<" grados centigrados."<<endl;

    return 0;

    .*/
}