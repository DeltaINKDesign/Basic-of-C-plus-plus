#include <iostream>
 
using namespace std;

//Potrzebne stale
#define PI 3.14159  //Liczba pi

//Pola powiezchni
long double p_kwadrat (long double); //Kwadrat
long double p_prostakat (long double, long double); //Prostakat
long double p_trojkat (long double , long double); //Trojkat
long double p_trapez (long double, long double , long double); //Trapez
long double p_kolo (long double ); //Kolo
long double p_rownoleglobok (long double, long double); //Rownoleglobok
long double p_romb (long double, long double ); //Romb, z przekatnych

//Obwody

long double o_kwadrat (long double); //Kwadrat
long double o_prostakat (long double, long double); //Prostakat
long double o_trojkat (long double, long double, long double); //Trojkat
long double o_trapez (long double, long double, long double, long double); //Trapez
long double o_kolo (long double); //Kolo
long double o_rownoleglobok (long double, long double); //Rownoleglobok

//Sterowanie

//Obsluga bledow
bool error (char);

int main()
{//Poczatek main
	 bool work; //Zmienna logiczna, jej stan wskazuje na to czy petla sie jeszcze ma potorzyc - umozliwi to wykonanie wielu obliczen, za jednym uruchomieniem programu
	 work = true; //Domyslna watosc - petla wykona sie przynajmiej raz

	char select;
	long double arg_1=0, arg_2=0, arg_3=0, arg_4=0; //Inicjowanie potrzebnych zmiennych lokalnych
	
	
	while (work == true)
	{
		cout << "Chcesz policzyc\n (p)ole powiezchni \n czy \n (o)bwod \n ";
		cin >> select;

	
		switch (select)  //Glowny switch
		{
			case 'p'://Pole powieżchni
			{
				cout << "Mozesz policzyc pola nastepujacych figur: \n (k)wadrat \n (p)rostakat \n (t)rojkat\n t(r)apez\n k(o)lo\n ro(w)noleglobok\n ro(m)b\n";
				cin >> select;
		
				switch (select)
				{
					case 'k': //kwadrat
					{	
						cout << "podaj bok kwadratu:";
						cin >> arg_1;
				
						cout << "Twoj wynik to:";
						cout << p_kwadrat (arg_1);
						cout << '\n';
						break;
					}	
			
					case 'p': //prostakat
					{
						cout << "podaj boki prostakta: ";
						cout << "bok 1: ";
						cin >> arg_1;
						cout << "bok 2: ";
						cin >> arg_2;
				
						cout << "Twoj wynik to:";
						cout << p_prostakat (arg_1, arg_2);
						cout << '\n';
						break;
					}
			
					case 't': //Trojkat
					{
						cout << "podaj podstawe:";
						cin >> arg_1;
						cout << "podaj wysokosc:";
						cin >> arg_2;
				
						cout << "Twoj wynik to:";
						cout << p_trojkat (arg_1, arg_2);
						cout <<'\n';
						break;
					}	
			
					case 'r': //Trapez
					{
						cout << "Podaj 1 podstawe:";
						cin >> arg_1; //1 podstawa
						cout << "Podaj 2 podstawe:";
						cin >> arg_2; //2 podstawa
						cout << "Podaj wysokosc:";
						cin >> arg_3; //wysokosc
					
						cout << "Twoj wynik to:";
						cout << p_trapez (arg_1, arg_2, arg_3); //arg_3 - wysokosc!
						cout << '\n';
						break;
					}
					
					case 'o': //Kolo
					{
						cout << "Podaj promien:";
						cin >> arg_1;
						
						cout << "Twoj wynik to:";
						cout << p_kolo (arg_1);
						cout << "\n";
						break;
					}
					
					case 'w':
					{
						cout << "Podaj podstawe:";
						cin >> arg_1;
						cout << "Podaj wysokosc:";
						cin >> arg_2; //arg_2 - wysokosc!
						
						cout << "Twoj wynik to:";
						cout << p_rownoleglobok(arg_1, arg_2);
						cout << "\n";
						break;
					}
					
					case 'm': //Romb
					{
						cout << "Podaj 1 przekatna:";
						cin >> arg_1;
						cout << "Podaj 2 przekatna:";
						cin >> arg_2;
						
						cout << "Twoj wynik to:";
						cout << p_romb (arg_1, arg_2);
						cout << "\n";
						break;
					}
					
					default:
					{	
						error(select);
						work=false; //Koniec petli
						break;
					}
					
					
					

				
			}//Koniec case - pole		
			break;
	/*	default:
		{
			work=error (select);
			break;
		}
	*/	
	
		}//Koniec switch'a pole

			case 'o': //Obwod
			{
				cout << "Obwod jakiej figury chcesz policzyc?\n (k)wadrat\n (p)rostokat\n (t)rojkat\n t(r)apez\n k(o)lo\n ro(w)noleglobok\n";
				cin >> select ;
		
				switch (select) 
				{
					case 'k': //Kwadrat
					{
						cout << "Podaj bok kwadratu";
						cin >> arg_1;
		
						cout << "Twoj wynik to:";
						cout << o_kwadrat (arg_1);
						cout << '\n';
						break;
					}
	
					case 'p': //Prostakat
					{
						cout << "Podaj 1 bok prostakata:";
						cin >> arg_1;
						cout << "Podaj 2 bok prostakata:";
						cin >> arg_2;
			
						cout << "Twoj wynik to:";
						cout << o_prostakat(arg_1, arg_2);
						cout << '\n';
						break;
					}
		
					case 't': //Trojkat
					{
						cout << "Podaj 1 bok trojkata:";
						cin >> arg_1;
						cout << "Podaj 2 bok trojkata:";
						cin >> arg_2;
						cout << "Podaj 3 bokt trojkata:";
						cin >> arg_3;
			
						cout << "Twoj wynik to:";
						cout << o_trojkat(arg_1, arg_2, arg_3);
						cout << '\n';
						break;	
					}
	
					case 'r': //Trapez
					{
						cout << "Podaj 1 bok:";
						cin >> arg_1;
						cout << "Podaj 2 bok:";
						cin >> arg_2;
						cout << "Podaj 3 bok:";
						cin >> arg_3;
						cout << "Podaj 4 bok:";
						cin >> arg_4;
	
						cout << "Twoj wynik to:";
						cout << o_trapez (arg_1, arg_2, arg_3, arg_4);
						cout << '\n';
						break;
					}	
				
					case 'o': //Kolo
					{
						cout << "Podaj promien:";
						cin >> arg_1;
						
						cout << "Twoj wynik to:";
						cout << o_kolo (arg_1);
						cout << "\n";
						break;
					}
					
					case 'w':
					{
						cout << "Podaj 1 podstawe:";
						cin >> arg_1;
						cout << "Podaj 2 podstawe:";
						cin >> arg_2; 
						
						cout << "Twoj wynik to:";
						cout << o_rownoleglobok (arg_1, arg_2);
						cout << "\n";
						break;
					}
					
					default:
					{
						error(select);
						work=false; //Koniec petli
						break;
					}
					

				break;

				}//Koniec wyboru figur, ktorej obowd ma byc obliczony
		break;				

		}//Case 'o' - zamkniecie	

	
		

		default: //Default glowno switch'owy
		{
			error(select);
			work=0;
			break;
		}

	}//Koniec glownego switch'a
	if (work==0)
	{
		break;
	}
//Pytanie o wykonanie kolejnych obliczen
	cout << "czy chcesz wykonac jeszcze jakies obliczenia przed zakonczeniem pracy programu? (y/n)";
	cin >> select;
	if (select == 'y')
	{
		work = true;
		} 
	else if (select == 'n')
	{
		work = 0; //False
		cout << "Dziekuje za skozystanie z mojego kalkulatora. Milego dnia :)\n";
		break; //Ustawienie work na false, nadal powoduje potozenie sie petli, jest to chyba jedyna metoda na rozwiazanie tego problemu...
	}
	
	

	}//Koniec while'a
	
}//Koniec main







//Definifcje funkcjii

//Pola powiezchni
long double p_kwadrat (long double a) //Kwadrat
{
	return a*a;
}


long double p_prostakat (long double a,long double b) //Prostakat
{
	return a*b;
}

long double p_trojkat (long double podstawa,long double h  ) //Trojkat
{
	return (podstawa*h)/2;
}

long double p_trapez (long double podstawa_1, long double podstawa_2, long double wysokosc) //Trapez
{
	return ((podstawa_1 + podstawa_2) * wysokosc)/2;
}

long double p_kolo (long double r) //Kolo
{
	return PI*(r*r);
}

long double p_rownoleglobok (long double a,long double h) //Rownoleglobok
{
	return a*h;
}

long double p_romb (long double e, long double f) //Romb z przekatnych
{
	return (e*f)/2;
}

//Obwody

long double o_kwadrat (long double a) //Kwadrat
{
	return a*4;
}

long double o_prostakat (long double a, long double b) //Prostakat
{
	return (a*2)+(b*2);
}

long double o_trojkat (long double a, long double b, long double c) //Trojkat
{
	return a+b+c;
}

long double o_trapez (long double bok_1, long double bok_2, long double bok_3, long double bok_4) //Trapez
{
	return bok_1 + bok_2 + bok_3 + bok_4;
}

long double o_kolo (long double r) //Kolo
{
	return 2*PI*r;
}

long double o_rownoleglobok (long double a, long double b) //Rownoleglobok
{
	return (2*a) + (2*b);
}


//Sterowanie

//Oblsuga bledow
bool error (char a)
{
	cout << "!ERROR!" << a << "Nie rozpoznano\n";
	return 0; //False
}

