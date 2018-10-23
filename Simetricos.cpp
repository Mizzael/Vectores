#include <iostream>
int simetrico(int numero[], int tam);
int orden(int numero[],int tam);
using namespace std;

int main()
{
    int vector[10]={1,2,3,4,5,5,4,3,2,1};
    cout<<simetrico(vector,10);
    cout<<orden(vector,10);
}

int simetrico(int vector[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        if(vector[i]==vector[tam-(i+1)])
        {
            if(i==(tam/2))
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }
    }
    
}
int orden(int vector[],int tam)
{
    int a=0,b=0;
    for(int i=0;i<tam;i++)
    {
        if(vector[i]<vector[i+1])
        {
            a++;
            if(a==9)
            {
                return 1;
            }
            else if(vector[i]>vector[i+1])
            {
                return 0;
            }
        }
        else if(vector[i]>vector[i+1])
        {
            b++;
            if(b==9)
            {
                return -1;
            }
            else if(vector[i]>vector[i+1])
            {
                return 0;
            }
        }
        
    }
}