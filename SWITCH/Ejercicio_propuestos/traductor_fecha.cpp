/*
Escriba un programa que lea tres valores enteros que represente el mes, el día y el año con cuatro dígitos. 
El programa deberá mostrar la fecha en uno de los formatos siguientes, dependiendo de la selección del usuario. 
Si el usuario introduce 1, se mostrara el mes con palabra (“Enero”), el día como un entero (11) y el año (1999). 
Si se introduce un 2, se mostrara el mes con una abreviatura de tres letras (“Ene”), el día como un entero (11) y el año (1999). 
Si se produce un 3, se mostrara el mes como un entero (01), el día como un entero (11) y el año (1999). Solo usar lo expuesto en temas vistos previamente.
Nota: En la imagen mostrada anteriormente se muestra como el usuario introduce los datos en una sola linea separados por espacios (07 09 2017). 
Se puede recoger estos tres valores con un mismo cin (cin>>variable1>>variblae2>>variable3).
*/
#include <iostream>

using namespace std;

int main()
{
    int dia,mes,anio,formato;
    
    cout<<"Por favor introduzca una fecha (mes,dia,año): ";
    cin>>mes>>dia>>anio;
    if(mes>=13){
        cout<<"Mes erroneo. Solo hay 12 meses";
    } else  if(dia>=32){
        cout<<"Ningun mes del año tiene más de 31 dias";
    } else if(anio>=2021){
        cout<<"Aún no se ha llegado a ese año";
    } 

    cout<<"¿Cómo le gustaría mostrar la fecha?"<<endl;
    cout<<"Mes completo, día,año (Julio 11,2020): Introduzca 1"<<endl;
    cout<<"Mes abreviado, día,año (Jul, 11, 2020): Introduzca 2"<<endl;
    cout<<"Mes en cifra/día/año (07/11/2020): Introduzca 3"<<endl;
    cout<<"Opción: ";
    cin>>formato;
    
    switch(formato){
        case 1:
            switch(mes){
                case 01:
                    cout<<"La fecha traducida es : Enero "<<dia<<" "<<anio;
                case 02:
                    cout<<"La fecha traducida es : Febrero "<<dia<<" "<<anio;
                case 03:
                    cout<<"La fecha traducida es : Marzo "<<dia<<" "<<anio;
                case 04:
                    cout<<"La fecha traducida es : Abril "<<dia<<" "<<anio;
                case 05:
                    cout<<"La fecha traducida es : Mayo "<<dia<<" "<<anio;
                case 06:
                    cout<<"La fecha traducida es : Junio "<<dia<<" "<<anio;
                case 07:
                    cout<<"La fecha traducida es : Julio "<<dia<<" "<<anio;
                case 8:
                    cout<<"La fecha traducida es : Agosto "<<dia<<" "<<anio;
                case 9:
                    cout<<"La fecha traducida es : Septiembre "<<dia<<" "<<anio;
                case 10:
                    cout<<"La fecha traducida es : Octubre "<<dia<<" "<<anio;
                case 11:
                    cout<<"La fecha traducida es : Noviembre "<<dia<<" "<<anio;
                case 12:
                    cout<<"La fecha traducida es : Diciembre "<<dia<<" "<<anio;
        }
        break;
        case 2:
            switch(mes){
                case 01:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 02:
                    cout<<"La fecha traducida es Feb "<<dia<<" "<<anio;
                case 03:
                    cout<<"La fecha traducida es Marz "<<dia<<" "<<anio;
                case 04:
                    cout<<"La fecha traducida es Abr "<<dia<<" "<<anio;
                case 05:
                    cout<<"La fecha traducida es May "<<dia<<" "<<anio;
                case 06:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 07:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 8:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 9:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 10:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 11:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
                case 12:
                    cout<<"La fecha traducida es Ene "<<dia<<" "<<anio;
        break;
        }
        case 3:
            cout<<"La fecha traducida es "<<mes<<" "<<dia<<" "<<anio;
        
        
        
        break;
        
        default:
        cout<<"Opción invalida";
    }
    return 0;
}