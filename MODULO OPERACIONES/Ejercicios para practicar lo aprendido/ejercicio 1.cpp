/* Escriba un programa con las siguientes expresiones como expresiones en C++ e imprima el 
resultado. Nota: Las variables a, b, c, d y f pueden inicializarse con cualquier valor. */

#include <iostream>

using namespace std;

int main(){

    float a=14,b=22,c=19,d=63,f=17,e=35,uno=0,dos=0,tres=0,cuatro=0;

    uno=(a/b)+1;

    cout <<"El resultado del ejercicio A es "<<uno<<endl;

    dos=(a+b)/(c+d);

    cout <<"El resultado del ejercicio B es "<<dos<<endl;

    tres=(a+(b/c))/(d+(e/f));
    
    cout<<"El resultado del ejercicio C es "<<tres<<endl;

    cuatro=a+(b/(c-d));

    cout<<"El resultado del ejercicio D es"<<cuatro<<endl;

    return 0;
}