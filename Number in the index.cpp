#include <iostream>
#include <vector> //1.Dodaj� potrzebn� bibliotek� �ebym m�g� u�ywa� tablic dynamicznych.
using namespace std;
int znajdzindeks(vector <int> liczby, int wartosc)
{
	for(int i=0; i<liczby.size();i++)
	{
		if (liczby[i]==wartosc)
		{
			return i;
		}
	}
	return -1;
}
 ///PRGORAM KT�RY: 1.WYSWIETLA POZYCJE LICZBY W TABLICY///
int main(int argc, char** argv) {
	int wybor;
	int x,y;
	cout<<"Witaj! Co chcesz otworzyc? \n1.Wyswietl pozycje liczby w tablicy\n Wybor: ";
	cin>>wybor;
	switch(wybor)
	{
		case 1:
			{
				int licznik=0; //licznik ktory zaczyna liczyc od 0
				vector<int> tablica; //2. Deklaruj� tablic�
				do			//3.P�tla do..while do przyjmowania liczb wi�kszych od zera
				{
					cout<<"Wpisz liczbe: ";
					cout<<"{"<<licznik<<"}";
					licznik++;
					cin>>x;
					if(x>0)
					tablica.push_back(x);
					
				}while(x>=0); //P�tla wykonuje si� tak d�ugo jak x jest wi�kszy b�d� r�wniutki zero.
				
				cout<<"Miejsce jakiej liczby chcesz zobaczyc? ";
				cin>>y;
				int indeks =znajdzindeks(tablica,y);
				if(indeks<0)
				cout<<"Nie ma tu takiej liczby ! ";
				else 
				cout<<"Znalazlem! twoja liczba jest zapisana w indeksie: "<<indeks;
				
			}
	}
	
	return 0;}

