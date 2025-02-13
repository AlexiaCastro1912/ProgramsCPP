/*
	EXAMEN 01 - AREA DE UN TRIANGULO
	Crea un programa para obtener el área de un triángulo, tomando en cuenta que la fórmula es: Área = (base x altura)/2
*/

#include<iostream>

using namespace std;

int main()
{
	float vArea, vBase, vAltura;
	
	cout<<"******BIENVENIDO AL SISTEMA PARA OBTENER EL AREA DE UN TRIANGULO******";
	cout<<"\nEn el siguiente sistema podras ingresar las medidas de dicho triangulo";
	cout<<"\ny el sistema te obtendra el resultado de forma automatica. Disffrutalo.";
	
	
	cout<<"\n\nIngrese la medida de la base: ";
	cin>>vBase;
	cout<<"Ingrese la medida de la altura: ";
	cin>>vAltura;
	
	vArea = (vBase * vAltura)/2;
	
	cout<<"\n			 -------------------------------";
	cout<<"\n			| El area del triangulo es: "<<vArea<<"  |";
	cout<<"\n			|_______________________________|"<<endl<<endl;

	return 0;
}
