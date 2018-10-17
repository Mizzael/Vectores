#include <iostream>
#include<time.h>

using namespace std;

int lanzar();
void Histograma(int valor);

int main()
{
    int dado,valor;
    int  vec[6]={0};
    srand(time(0));
    for(int i=0; i<=200; i++)
    {
        vec[lanzar()-1]++;
    }
    for(int i=0; i<=5; i++)
    {
        cout<<i+1<<" cayo "<<vec[i]<<" ";Histograma(vec[i]);cout<<endl;
    }
    return 0;
}

int lanzar()
{
    int cara=1+rand()%6;
    return cara;
}

void Histograma(int valor)
{
    for(int i=0; i<=valor; i++)
    {
        cout<<"*"<<" ";
    }
}
