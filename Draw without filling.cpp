#include <iostream>
using namespace std;
int i;
int j;
int bok;

void linia(int kre)
{
	for(i=0;i<kre;i++)
		{
			cout<<"-";
		}
}

void pustylinia(int pus,int pusb)
{
	for(i=0;i<pusb;i++)
	{
	if ((i==0)||(i==pusb-1))
	cout<<"-";
	else 
	if ((j==0)||(j==pus-1))
	cout<<"-";
	else 
	cout<<" ";
	}
}
void kwadrat(int kwad)
{ 
	for(j=0;j<kwad;j++)
	{
	linia(kwad);
	cout<<endl;
	}
}

void prostokat(int pro,int prob)
{
	for(j=0;j<pro;j++)
	{
		pustylinia(pro,prob);
		cout<<endl;
	}
}

	
int main() {
int akcja; 
int boka;
int bokb;
cout<<"Co wybierasz?\n1.Pelny Kwadrat\n2.Pusty w srodku prostokat\n";
cin>>akcja;
switch(akcja){
	case 1:
		{
		cout<<"Wybrany zostal kwadrat.\n";
		cout<<"Jak wielki bok ma twoj kwadrat? ";
		cin>>bok;
		kwadrat(bok);
		break;}
	case 2:
		{
			cout<<"Wybrany zostal prostokat.\n";
			cout<<"Jakie ma rozmiary?\nPodaj wysokosc: ";
			cin>>boka;
			cout<<"Podaj szerokosc: ";
			cin>>bokb;
			prostokat(boka,bokb);
			break;
		}
		}
return 0;
}
