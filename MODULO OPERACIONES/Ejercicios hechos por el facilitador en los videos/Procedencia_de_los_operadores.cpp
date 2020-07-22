//Este programa muestra la procedencia de los operadores.

#include <iostream>

using namespace std;

int main(){

    int num1 = 5;
    int num2 = 2;
    int num3 = 7;
    int resultado = 0;

    resultado = num1 * num2 + num3;
    //El valor que va a tomar resultado es de 17.

    cout << "El valor de resultado es "<<resultado<<"."<<endl;

    resultado = num1 * (num2 + num3);
    //El valor de resultado es de 45.
    cout <<"El valor de resultado es "<<resultado<<"."<<endl;
    return 0;
}