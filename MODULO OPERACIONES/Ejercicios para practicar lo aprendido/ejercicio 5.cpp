// Crea un programa que calcule el área de la figura en la carpeta. (Formula circulo A=pir2 tri b*h/2

#include <iostream>

using namespace std;

int main(){

    float pi=3.1416,radio=10,altura=13, areaC=0,areaT=0,areaTotal=0;

    areaC=((radio*radio)*pi)/2;

    

    areaT=(radio*altura)/2;

    
    areaTotal=areaC+areaT;
    
    cout<<"El area de la figura es "<<areaTotal<<endl;

    
    return 0;
}