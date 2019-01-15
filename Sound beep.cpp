#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int i=200, max=0;
	cout<<"Podaj najwyzsza czestotliwosc"<<endl;
	cin>> max;

	for(i=200; i<max; i=i+10)
	{
	Beep(i, 300);//czestotliwosc w Hz i czas trwania w Ms
	cout<< "Czestotliwosc "<<i<<" Hz"<<endl;
	}
	
	cout<< " Koniec!!! ";
	
	
	
	return 0;
}
