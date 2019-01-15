#include <iostream>
#include <string>
//Podaj imie, podaj nazwisko, i podaj ile razy maja sie powtarzac, wypisujac tekst Witaj"imie i nazwisko, tyle razy, ile za¿yczy sobie wczeœniej u¿ytkownik.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string ab; //string zeby przyjmowac nazwy
	string b;
	int a;
	int i;
	cout<<"Witaj. Wpisz swoje imie i nazwisko, oraz powiedz mi, ile razy mam je powtorzyc. dzieks\n";
	cin>>ab;
	cin>>b;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cout<<(i+1)<<". Witaj "<<ab<<" "<<b<<endl;
	
	}
	return 0;
}
