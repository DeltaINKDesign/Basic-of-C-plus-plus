#include <iostream>

using namespace std;

int main()
{
	int next=1;
	int potega; //miejsce na najwyzsza potege
	do
	{
	system("cls"); //czysci ekran
	cout<<"Podaj najwieksza potege wielomianu: (MUSI BYC LICZBA CALKOWITA!)"<<endl;  //po wprowadzeniu liczby calkowitej>0 idzie dalej, przy liczbie -, blad i pyta ponownie, przy stringu blad i pyta ponownie, przy ulamku blad. 
	cin>>potega;
	int pot=potega;
	float wartosci[potega+1]; //tablica ma miec rozmiar rowny ilosci poteg i zwiekszona o 1 dla przechowywania liczby wolnej
	if ((cin.good()==true) && (potega>0))
	{
		int a=0;
		do{
			cout<<"Podaj liczbe przy "<<potega<<" : "; //tutaj pyta o kazda potege...
			cin>>wartosci[a]; //pzypisywanie do tablicy
			a++;
			potega--;
		}
		while(potega>=0);
		
		// ARGUMENTY, czyli liczba za X - jesli nie jest stringiem to liczy. KONIEC->Podaje wynik
	float argument;
	cout<<"Podaj argument (MUSI BYC LICZBA): "<<endl;
	cin>>argument; //zapisuje argumenty za x
	int potega2=0; //zeruje pomocnicza zmienna
	float x=wartosci[potega2]; //odczyt z tablicy
	do
	{
		x=x*argument+wartosci[potega2+1]; //przypisywanie wartosci do poteg i do wolnej wartosci. Zgodnie z algorytmem hornera tsaaa
		potega2++; //przechodzi przez wszystkie potegi
	}
	while(pot>potega2); //dopoki nie przejdzie przez wszystkie potegi i liczbe wolna
	cout<<"Wynik po podstawieniu argumentu wynosi: "<<x<<endl; //podaje wynik
	}
	else
	{
		cout<<"Wprowadzone dane nie sa liczba calkowita lub nie spelniaja warunkow"<<endl;
	}
	cout<<"Czy chcesz liczyc kolejny wielomian? "<<endl<<"1 to TAK | 2 to NIE"<<endl;
	cin>>next; //przechowuje odpowiedz czy ktos chce liczyc dalej
}while(next==1);
	return 0;
}
