#include <iostream>
#include <vector>
//Zadanie w kt�rym program wczytuje liczby, przy tym wy�wietla ich numery, indeksy. Po wpisaniu liczby ujemnej 
//program zatrzymuje si�, po czym wy�wietla�redni� liczon� w funkcji. 
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
	do					//p�tla dzia�a do czasu a� u�ytkownik wpisze ujemn� liczb�.
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
