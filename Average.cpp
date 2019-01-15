#include <iostream>
#include <vector>
//Zadanie w którym program wczytuje liczby, przy tym wyœwietla ich numery, indeksy. Po wpisaniu liczby ujemnej 
//program zatrzymuje siê, po czym wyœwietlaœredni¹ liczon¹ w funkcji. 
using namespace std;

int i;
float srednia(vector <int> liczbyy)
{
	float sum=0;
	for(i=0;i<liczbyy.size();i++)
	{
		sum = sum+ liczbyy[i];
	}
	return sum/liczbyy.size();
}

int main(int argc, char** argv) {
	vector <int> liczby;
	int licznik;
	int a; 
	do					//pêtla dzia³a do czasu a¿ u¿ytkownik wpisze ujemn¹ liczbê.
	{
		cout<<"["<<licznik<<"]";
		licznik ++;
		cin>>a;
		if(a>0)
		{
			liczby.push_back(a);
		}
		
	}
	while(a>=0);
	
	cout<<"srednia"<<srednia(liczby);
	
	return 0;
}
