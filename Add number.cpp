#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<< "***Program sumujacy liczby***\n";
	cout<<"Ile liczb chcesz zsumowac???\n";
	int ile=0, liczba=0, suma=0;
	cin>>ile;
	
	for(int i=1; i<=ile; i=i+1){
		cout<<"Podaj liczbe:";
		cin>>liczba;
		suma=suma+liczba;
		
		
	}
	
	cout<<"Suma liczb wynosi: "<<suma;
	
	
	
	return 0;
}
