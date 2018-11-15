#include <iostream>

using namespace std;

int SumarTrabajador(int matriz[][6]);
int SumarVentas(int matriz[][6]);
void Mostrar(int matriz[][6]);
int main()
{
int matriz[5][6]={0}, nv, np, cp, op;

do
{
cout<<"\tMenu\n";
cout<<"[1]Ingresar Ventas\n[2]Total\n[0]Salir\nIngrese la opcion: ";
cin >> op;
switch(op)
{
case 1:
cout << "Ingrese el numero del vendedor (1-4): ";
cin >> nv;
cout << "Ingrese el numero del producto (1-5): ";
cin >> np;
cout << "Ingrese la cantidad de producto: ";
cin >> cp;
matriz[nv - 1][np - 1] = cp;
break;
case 2:
SumarVentas(matriz);
SumarTrabajador(matriz);
Mostrar(matriz);
break;
default:
cout<<"Opcion Incorrecta"<<endl;
break;
}
}while(op!=0);
return 0;
}


int SumarTrabajador(int matriz[][6])
{
	int aux = 0;
	for(int c = 0; c < 5; c++)
	{
		aux = 0;
		for(int r = 0; r < 4; r++)
		{
			aux += matriz[r][c];
		}
		return matriz[4][c] = aux;
	}
}

int SumarVentas(int matriz[][6])
{
	int aux = 0;
	for(int r = 0; r < 4; r++)
	{
		aux = 0;
	for(int c = 0; c < 5; c++)
	{
		aux += matriz[r][c];
	}
	return matriz[r][5] = aux;
	}
}
	
void Mostrar(int matriz[][6])
{
	cout << "\t\tProducto";
	cout << endl << "Vendedor";
	cout << endl << "\t 1 \t 2 \t 3 \t 4 \t5\tTotal"<< endl;
for(int r = 0; r < 5; r++)
{
	if(r < 4)
	{
		cout << r + 1;
		}
		else
		{
			cout << "Total";
		}
for(int c = 0; c < 6; c++)
{
cout << "\t " << matriz[r][c] ;
}
cout << endl;
}