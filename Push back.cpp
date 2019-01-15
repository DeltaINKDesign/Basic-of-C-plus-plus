#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector <int> tablica;
	int liczba=0;
	int i;
	cout<<"Podaj liczbe ktora mam przyporzadkowac: ";
	do{
		cin>>liczba;
		tablica.push_back(liczba);
	}while(liczba!=1);
	
	for(i=0;i<tablica.size();i++)
	{
	cout<<tablica[i]<<" ";
		
	}

	return 0;
}
