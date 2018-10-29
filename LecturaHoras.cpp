#include <iostream>

using namespace std;

int Conteo(int Hrs, int Min,int Seg);
void Desglosar(int SegCont);

int main()
{
    int Seg, Hrs,Min;
    int SegCont;
    cout<<"Ingrese las horas: ";cin>>Hrs;
    cout<<"Ingrese los minutos: ";cin>>Min;
    cout<<"Ingrese los segundos: ";cin>>Seg;
    cout<<"Segundos Equivalentes: "<<Conteo(Hrs,Min,Seg)<<endl;
	SegCont=Conteo(Hrs,Min,Seg);
	Desglosar(SegCont);
	
    return 0;
}

int Conteo(int Hrs,int Min,int Seg)
{
	int Segundos;
	Segundos=(Hrs*3600)+(Min*60)+Seg;
	return Segundos;

}

void Desglosar(int SegCont)
{
	int Horas=0, Minutos=0, Segundos=0;
	Horas=(SegCont/3600);
	cout<<"Horas: "<<Horas<<endl;
	Minutos=(SegCont%3600)/60;
	cout<<"Minutos: "<<Minutos<<endl;
	Segundos=(SegCont%3600)%60;
	cout<<"Segundos: "<<Segundos;	
}
