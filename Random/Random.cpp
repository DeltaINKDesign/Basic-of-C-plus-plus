#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
	int kolor ;
	int pierwszaa=3;
	int pierwsza1=3;
	int pierwsza2=4;
	int warunek=0;
	srand( time ( NULL));
	kolor=rand()%3;
	cout<<kolor;
	getch();
	do{
		if(warunek==1) pierwsza2=0;
	if(pierwszaa==0) cout<<" PUSTE ";				if(kolor==0)	{
	cout<<" CZERWONY ";
	pierwsza1=0;
	pierwsza2=0;
	}
	if(pierwsza1==0) cout<<" Pusty ";				if(kolor==1)	{
	
	if(warunek==1) {
	cout<<" Zielony ";}
	pierwszaa=0;
	
 	warunek++;
	}									
	
	if(pierwsza2==0) cout<<" Pusty ";				if(kolor==2)	{
	
	if(warunek==1) cout<<" Niebieski ";
	pierwszaa=0;
	warunek++;
	}
	}while(warunek==1);
}




//losujemy jeden kwadrat. 
//jeden kwadrat dwa warunki
//jezeli wczesniejszy dostal jedynke reszta musi dostac pusty
//powtarzac do bledu 
