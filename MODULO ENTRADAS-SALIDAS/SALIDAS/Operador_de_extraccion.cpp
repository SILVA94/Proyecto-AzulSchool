//Programa que guarda los datos de un alumno: nombre,edad,grado y matriculoa.
#include <iostream>
#include <string>

using namespace std;

int main(){

    int edad=0,grado=0,matricula=0;
    string nombre="Ricardo";

    cout<<"El nombre del alumno: ";
    cin>>nombre;

    cout<<"Edad ";
    cin>>edad;

    cout<<"Grado ";
    cin>>grado;

    cout<<"Matricula ";
    cin>>matricula;

    cout<<endl<<"Nombre del alumno "<<nombre<<"Edad "<<edad<<"Grado "<<grado<<"Matricula "<<matricula;


    return 0;
}