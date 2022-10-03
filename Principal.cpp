#include "Sucesion.h"
#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;
//Ricardo Valente Martinez Flores          14/09/2022
int main (int argc, char * arg[])
{
	int n,opc,s=0,*A2;
	do
	{
	system("Cls");
	cout<<"Programa que permite calcular el Termino N de la sucesion"<<endl;
	do
	{
	cout<<"Que termino desea encontrar"<<endl;
	cin>>n;
	}while(n<1);
	Sucesion S(n);
	A2 = new int [n];
	cout<<"De que manera desea calcularlo  \n1.Iterativo  \n2.Recursivo"<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1:
			system("Cls");
			cout<<"Iterativa"<<endl;
			S.sucesionIterativa(n);
			S.visualizarI();
			break;
		case 2:
			system("Cls");
			cout<<"Recursiva"<<endl;
			S.visualizarR();
			break;	
		default:cout<<"Ingrese valores correctos"<<endl;
	}
	S.Liberar();
	cout<<"Desea regresar al menu?  Si=1    No=cualquier numero"<<endl;
	cin>>s;
	}while(s==1);
	
	getchar();
	system("pause");
	return 0;
}
