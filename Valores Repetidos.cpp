#include <iostream>

using namespace std;

void Mostrar(int vector[],int tam);
void comprimir(int vector[],int tam);


int main()
{
    int vector[25]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
    comprimir(vector,25);
    Mostrar(vector,25);
    return 0;
}

void comprimir(int vector[],int tam)
{
    for(int i=0;i<tam-1;i++)
    {
        for(int x=i+1;x<tam;x++)
        {
            if(vector[x]==vector[i])
            vector[x]=-1;
        }
    }
}

void Mostrar(int vector[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<vector[i]<<endl;
    }
}
