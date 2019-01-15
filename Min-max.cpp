#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
//Wyszukaj najmniejsza liczbe z n liczb podanych przez uzytkownika.
int a,b;
int najwiekszy;
int najmniejszy;

void najmn(vector <int> tabliczka) //funkcja ktora wczytuje liczby  
{
	do  //pêtla do ktora dzia³a do czasu wpisania -1
	{
	cout<<"Podaj liczby:"<<endl;
	cin>>a;
	tabliczka.push_back(a);   //dodaje nowy element do tablicy ktory zczytuje z wyzszego a
	}
	while (a!=-1);  //dzia³a do czasu wpisania -1
	
//	for(int i=0;i<tabliczka.size();i++) //pêtla ktora wyswietla wszystkie wpisane liczby
//	{									//tabliczka size to rozmiar dynamicznej tablicy
//		cout<< tabliczka[i]<<endl;
//	}
	
	int min=tabliczka[0];   //zak³adamy ¿e najmniejsza narazie liczba jest pierwsza liczba w tabelii
	for(int i=1;i<tabliczka.size();i++) //pêtla ktora zaczyna siê od drugiego wyrazu
	{
		if(min>tabliczka[i])			//je¿eli pierwszy wyraz jest mniejszy od drugiego, to
		min=tabliczka[i];				// pierwszy zabiera drugiemu, i tak do konca petli
		}
		
	int max=tabliczka[0];		//tutaj powtórka, zakladamy ze max jest pierwszym wyrazem tabelii
	for(int i=1;i<tabliczka.size();i++) //to samo co wyzej
	{
		if(max<tabliczka[i])		//jezeli max jest mniejszy od wyrazu z tabelii
		max=tabliczka[i];			//to on pochlania jego wartosc i tak dziala do konca petli
		}
		
	cout<<"Najmniejsza to:"<<min<<" Najwieksza to:"<<max;
	}

int main(int argc, char** argv) 
{
	vector <int> tab;
	najmn(tab);
	return 0;}
