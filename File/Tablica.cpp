#include <iostream>
#include <vector>
#include <fstream>


using namespace std;
/*
Stwórz tablice która zawiera 5,1,12,3,7,0
Ma posortowac te liczby od najmniejszej do najwiekszej, wyswietlic i zapisac do pliku txt którego jeszcze nie ma
*/

int main()
{
	int tablica[6]={5,1,12,3,7,0};

    fstream plik;
    plik.open("tabliczka.txt", ios::out);
    
	for(int j=0; j<6;j++)
	{
		
	
		for(int i=0; i<6; i++)
		{
		
			if(tablica[i]>tablica[i+1])
			{
				int zapas;
				zapas=tablica[i];				//zapas to pi¹tka
				tablica[i]=tablica[i+1];		//pierwza cyfra zyskuje wartosc drugiej			
				tablica[i+1]=zapas;				//druga cyfra jest zapasem czyli pierwsza
				
			}
		}
	}
	for(int k=0; k<6;k++)
	{
		cout<<tablica[k]<<endl;
		plik<<" "<<tablica[k];
	}
	
	plik.close();
	return 0;
}
