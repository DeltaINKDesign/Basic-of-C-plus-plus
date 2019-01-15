#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//Nale¿y wczytaæ do tablicy liczby do podania przez u¿ytkownika,-1 konczy funkcje, po czym wyswietlamy kwadraty 
//tych liczb zrobione w funkcji.
int i;
int j;
void kwadrat (vector <int> tabi)
{
	for(i=0;i<tabi.size();i++)
	{
		cout<<tabi[i] *tabi[i];
		cout<<" ";
	}
}
int main(int argc, char** argv) {
	int liczba;
	vector <int> tab;
	
	do
		{
		j++;
		cin>>liczba;
		if(liczba>0)
			tab.push_back(liczba);
			
	}while (liczba>=0);
	kwadrat(tab);
	return 0;
}
