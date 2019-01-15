#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int indekss(vector <int> tab, int x)
{
	for(int i;i<tab.size();i++)
	{
		if(x==tab[i])
		return i;
	}
	return -1;
}
int main(int argc, char** argv) {
	vector <int> tablica;
	int liczba,a;
	do{
		cout<<"Podaj liczbe: ";
		cin>>liczba;
		if(liczba>0)
			tablica.push_back(liczba);
	}while(liczba>=0);
	cout<<"Wpisz liczbe: ";
	cin>>a;
	int indeks = indekss(tablica,a);
	cout<<"Indeks tej liczby to: "<<indeks;
	return 0;
}
