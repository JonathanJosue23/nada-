#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
	string articulos[10];
	int precio[10];
	int suma=0;
	float iva=0;
	float subt=0;
	float desc=0;
	float total=0;
	
	cout<< "Ingrese el Articulo y Precio";
	for(int i=0; i<10; i++)
	{
		cout << "\nArticulo "<< i+1<<" \n";
		cout << "Articulo: ";
		cin >> articulos[i];
		cout << "Precio: ";
		cin >> precio[i];
		
		suma = suma + precio[i];
	}
	cout << "\nLista de Articulos y Precio\n";
	for(int i=0; i<10; i++)
	{
		cout << articulos[i] << " " << precio[i] << "\n";
	}
	cout << "\nLa suma de los articulos es: "<<suma;
	
	iva=suma*0.12;
	cout << "\nEl IVA es: "<<iva;
	
	subt=suma+iva;
	desc=subt*0.10;
	total=subt-desc;
	cout<<"\nEl descuento es: "<<desc;
	cout<<"\nEl total es: "<<total;
	cout<<"\n";
	
	getch();
	return 0;
}
//
