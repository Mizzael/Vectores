#include <iostream>
using namespace std;

void llenar(int vector[], int tam, int num);
void Mostrar(int vector[],int tam);
int Sumar(int vector[], int tam);
void MostrarInverso(int vector[], int tam);
void GirarAr(int vector[], int tam);
void GirarA(int vector[], int tam);
void Invertir(int vector[], int tam);

int main()
{
    
    int vector[10];
    int num,suma=0;
    
    cout<<"Ingresa un valor: ";cin>>num;
    llenar(vector,10,num);
    Mostrar(vector,10);
    cout<<"La suma es: "<<Sumar(vector,10)<<endl;
    //MostrarInverso(vector,10);
    //GirarArvector,10);
    Invertir(vector,10);
    Mostrar(vector,10);

    
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
    int suma=0;
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

void GirarAr(int vector[], int tam)
{
    int aux=vector[0];
    for(int i=1;i<tam-1;i++)
    {
        vector[i]=vector[i+1];
    }
    aux=vector[tam-1];
}

void GirarA(int vector[], int tam)
{
    int aux=vector[tam-1];
    for(int i=tam-1;i>=0;i--)
    {
        vector[i]=vector[i-1];
    }
    aux=vector[0];
}

void Invertir(int vector[], int tam)
{
    for(int i=0,j=tam-1;i<tam/2;i++,j--)
    {
           int aux=vector[j];
           vector[j]=vector[i];
           vector[i]=aux;
    }
}