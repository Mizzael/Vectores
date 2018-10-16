#include <iostream>
using namespace std;

void llenar(int vector[], int tam, int num);
void Mostrar(int vector[],int tam);
int Sumar(int vector[], int tam);
void MostrarInverso(int vector[], int tam);
void Girar(int vector[], int tam);
void

int main()
{
    
    int vector[10];
    int num,suma=0;
    
    cout<<"Ingresa un valor: ";cin>>num;
    llenar(vector,10,num);
    Mostrar(vector,10);
    cout<<"La suma es: "<<Sumar(vector,10)<<endl;
    MostrarInverso(vector,10);
    Girar(vector,10);

    
    return 0;
}

void llenar(int vector[], int tam, int num)
{
    for(int i=0;i<tam;i++)
    {
        vector[i]=num++;
    }
}

void Mostrar(int vector[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<"["<<i<<"]= "<<vector[i]<<endl;  
    }
}

int Sumar(int vector[], int tam)
{
    int suma;
    for(int i=0;i<10;i++)
    {
        suma+=vector[i];
    }
    return suma;
}

void MostrarInverso(int vector[], int tam)
{
    for(int i=tam-1;i>=0;i--)
    {
        cout<<"["<<i<<"]= "<<vector[i]<<endl;   
        
    }
}

void Girar(int vector[], int tam)
{
    int aux=vector[0];
    for(int i=1;i<tam-1;i++)
    {
        vector[i]=vector[i+1];
    }
    aux=vector[tam-1];
}