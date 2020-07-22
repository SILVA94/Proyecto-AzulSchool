#include <iostream>

using namespace std;

int main(){
	float r=10.0, h=13.0, b=10.0, areaTriangulo=0, areaCirculo=0, areaTotal=0;
	
	areaTriangulo=(b * h)/2;
	areaCirculo=((r*r)*3.1416)/2;
	areaTotal=areaCirculo+areaTriangulo;
	
	cout<<"El area de la figura es de: "<<areaTotal<<endl;
	
	return 0;
}