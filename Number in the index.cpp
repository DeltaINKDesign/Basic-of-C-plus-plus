#include <iostream>
#include <vector> 
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
 ///PROGRAM KTÓRY: 1.WYSWIETLA POZYCJE LICZBY W TABLICY///
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
				vector<int> tablica; //2. Deklarujê tablicê
				do			//3.Pêtla do..while do przyjmowania liczb wiêkszych od zera
				{
					cout<<"Wpisz liczbe: ";
					cout<<"{"<<licznik<<"}";
					licznik++;
					cin>>x;
					if(x>0)
					tablica.push_back(x);
					
				}while(x>=0); //Pêtla wykonuje siê tak d³ugo jak x jest wiêkszy b¹dŸ równiutki zero.
				
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

