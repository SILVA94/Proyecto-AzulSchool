/* (1) Crea un programa en C++ que:

1.- Muestre el listado de los planetas (con sus números asociados).

Planeta	Distancia media al sol (En millones de kilómetros).
Mercurio	59
Venus	108
Tierra	150
Marte	228
Júpiter	750
Saturno	1431
Urano	2877
Neptuno	4509
2.- Pida por teclado el número (dato entero) asociado a un planeta.

3.- Muestre la distancia media al Sol, a la que se encuentra el planeta seleccionado.

Nota: Si el número introducido por el usuario, no está asociado a ningún planeta, se mostrará el mensaje: “ERROR: <número> no está asociado a ningún planeta.”.
*/

#include <iostream>

using namespace std;

int main()
{
     int numero;
    
    cout<<"Ingresa el numero de planeta ";
    cin>>numero;
    cout<<"1.- Mercurio"<<endl;
    cout<<"2.- Venus"<<endl;
    cout<<"3.- Tierra"<<endl;
    cout<<"4.- Marte"<<endl;
    cout<<"5.- Jupiter"<<endl;
    cout<<"6.- Saturno"<<endl;
    cout<<"7.- Urano"<<endl;
    cout<<"8.- Neptuno"<<endl;
    

    if(numero==1){
    
        cout<<"La distancia media al sol en millones de kilometros de Mercurio al sol es 59";
    }else if(numero==2){
        
            cout<<"La distancia media al sol en millones de kilometros de Venus al sol es 59";
        } else if (numero==3){
            cout<<"La distancia media al sol en millones de kilometros de la Tierra al sol es 59";   
        }
    


    return 0;

    
}