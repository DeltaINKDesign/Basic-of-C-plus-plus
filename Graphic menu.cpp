#include <iostream>  //standardowa biblioteka wejscia wyjscia
#include <vector>
#include <fstream>
#include <windows.h> //beep i sleep 
#include <cstdlib>


using namespace std;

vector<int>sekwencja;
int iter=1;
int wybor;
int wyborwmenu;
int main()
{
	ShowWindow( GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);	
	CONSOLE_FONT_INFOEX cfi;							//struktura w ktorej zawieraja sie informacje o czcionce, struktura cfi 
    cfi.cbSize = sizeof cfi;											
    cfi.dwFontSize.X;									//rozmiar x czcionki
    cfi.dwFontSize.Y;									//rozmiar y czcionki
    cfi.FontFamily = FF_DONTCARE;						
    cfi.FontWeight;										//kursywa i inne glupotki
    GetCurrentConsoleFontEx(outcon, false, &cfi);		//na poczatek musisz "zdobyæ" aktualne informacje o konsoli zeby je pozniej nadpisac
	cfi.dwFontSize.X = 6;								//edytujemy strukturê na to jak¹ chcemy, tutaj ustawiasz x 
	cfi.dwFontSize.Y = 12;								//tutaj y
	cfi.FontWeight = 100;								
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); //ustawia parametry do tych podanych wyzej
	bool wynik_rozgrywki;
	setlocale(LC_ALL,"");

	system("COLOR 09");
	cout<<endl;
	cout<<endl;
	cout<<"      RRRRRRRRRRRRRRR"<<"            "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPPPPPPPPPPPPPPPP"<<"         "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"    AAAAAAAAAAAAAAAAAAA     "<<"  "<<"TTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
	cout<<"   RRRRRRRRRRRRRRRRRRRRR"<<"         "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPPPPPPPPPPPPPPPPPP"<<"       "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"  AAAAAAAAAAAAAAAAAAAAAAAA  "<<"  "<<"TTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
	cout<<" RRRRRRRRRRRRRRRRRRRRRRRRR"<<"       "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPPPPPPPPPPPPPPPPPPPP"<<"     "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"TTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
	cout<<"RRRRRRRRRRRRRRRRRRRRRRRRRRRR"<<"     "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPPPPPPPPPPPPPPPPPPPPPP"<<"   "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"TTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
	cout<<"RRRRRRRR            RRRRRRRR"<<"     "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP            PPPPPPPPP"<<"  "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR            RRRRRRRR"<<"     "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP            PPPPPPPPP"<<"  "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR            RRRRRRRRR"<<"    "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP            PPPPPPPPP"<<"  "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR            RRRRRRRRR"<<"    "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP            PPPPPPPPP"<<"  "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR            RRRRRRRR"<<"     "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP            PPPPPPP"<<"    "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR          RRRRRRRR"<<"       "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"PPPPPPPP            PPPPPP"<<"     "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRRRRRRRRRRRRRRRRRRR"<<"        "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"PPPPPPPPPPPPPPPPPPPPPPPP"<<"       "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRRRRRRRRRRRRRRRRRRRRR"<<"      "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"PPPPPPPPPPPPPPPPPPPPPPP"<<"        "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR           RRRRRRRRRR"<<"    "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"PPPPPPPPPPPPPPPPPPPPPP"<<"         "<<"EEEEEEEEEEEEEEEEEEEEEE"<<"        "<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR             RRRRRRRRR"<<"   "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP"<<"                       "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR              RRRRRRRR"<<"   "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP"<<"                       "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR              RRRRRRRR"<<"   "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP"<<"                       "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR               RRRRRRR"<<"   "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP"<<"                       "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR               RRRRRRR"<<"   "<<"EEEEEEEE"<<"                      "<<"PPPPPPPP"<<"                       "<<"EEEEEEEE"<<"                      "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR               RRRRRRR "<<"  "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPP"<<"                       "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR               RRRRRRRR"<<"  "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPP"<<"                       "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	cout<<"RRRRRRRR               RRRRRRRR"<<"  "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"PPPPPPPP"<<"                       "<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<"  "<<"AAAAAAAA            AAAAAAAA"<<"  "<<"          TTTTTT            "<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	HANDLE hOut;
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( hOut, 02);
	cout<<"    III        NNN    NNN     OO     WW     WW     AAAAA         GGGGG    RRRRRRR    AAAA   "<< flush <<endl;
	cout<<"   I II        NNNNN  NNN   OO  OO   WW  W  WW    AA   AA      GGG       RRR   RRR  AA  AA  "<<endl;
	cout<<"     II        NNN NN NNN  OO    OO  WW WWW WW    AAAAAAA      GGG GGGG  RRRRRRRR   AAAAAA  "<<endl;
	cout<<"     II        NNN  NNNNN   OO  OO   WWW   WWW    AA   AA      GGG  GGG  RRR   RRR  AA  AA  "<<endl;
	cout<<"     II o      NNN    NNN     OO     WW     WW    AA   AA       GGGGGG   RRR   RRR  AA  AA  "<<endl;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"    III        III  NNN    NNN   SSSSS  TTTTTTTTT   RRRRRR   UUU  UUU  KKK  KKK    CCCCCC        JJJ   AAAA   "<<endl;
	cout<<"  II  II       III  NNNNN  NNN  SSS        TTT     RRR  RRR  UUU  UUU  KKK  KK    CCC   CC       JJJ  AA  AA  "<<endl;
	cout<<"     II        III  NNN NN NNN    SSS      TTT     RRRRRRR   UUU  UUU  KKKKK     CCC             JJJ  AAAAAA  "<<endl;
	cout<<"    II         III  NNN  NNNNN       SSS   TTT     RRR  RRR  UUU  UUU  KKK  KK    CCC   CC   JJ  JJJ  AA  AA  "<<endl;
	cout<<"  IIIIII o     III  NNN    NNN   SSSSSS    TTT     RRR  RRR   UUUUUU   KKK  KKK    CCCCCC    JJJJJJJ  AA  AA  "<<endl;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"    III          AAAA   UUU  UUU  TTTTTTTTT   OOOO     RRRRRR   "<<endl;
	cout<<"  II  II        AA  AA  UUU  UUU     TTT     OO  OO   RRR  RRR  "<<endl;
	cout<<"     II         AAAAAA  UUU  UUU     TTT    OO    OO  RRRRRRR   "<<endl;
	cout<<"  II  II        AA  AA  UUU  UUU     TTT     OO  OO   RRR  RRR  "<<endl;
	cout<<"    III o       AA  AA   UUUUUU      TTT      OOOO    RRR  RRR  "<<endl;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"  III  III     WW     WW   YY   YY     JJJ   SSSSS     CCCCCC    III  EEEEEEE   "<<endl;
	cout<<"  III  III     WW  W  WW    YY YY      JJJ  SSS       CCC   CC   III  EEE       "<<endl;
	cout<<"  IIIIIIII     WW WWW WW     YYY       JJJ    SSS    CCC         III  EEEEE     "<<endl;
	cout<<"       III     WWW   WWW     YYY   JJ  JJJ      SSS   CCC   CC   III  EEE       "<<endl;
	cout<<"       III o   WW     WW     YYY   JJJJJJJ   SSSSS     CCCCCC    III  EEEEEEE   "<<endl;
	/*
	Beep(261,500);
	Sleep(100);
	Beep(523,500);
	Beep(587,500);
	Beep(659,500);
	Beep(698,500);
	Beep(784,800);
	Beep(784,500);
	Beep(876,400);
	Beep(523,500);
	Beep(587,500);
	Beep(659,500);
	Beep(698,500);
	Beep(784,800);
	Beep(784,500);
	Beep(876,400);
	Beep(523,500);
	Beep(587,500);
	Beep(520,500);
*/
	do
{
	cin>>wybor;
	switch(wybor)
		{
			case 1: 
					{
					system("cls");
					cfi.dwFontSize.X = 40;			//nowa wartosc
					cfi.dwFontSize.Y = 30;			//nowa wartosc
					
					 do
						{
							int nowykolor = rand()%10;
							sekwencja.push_back(nowykolor);
							int odpowiedz;
							for (int i=1; i<=iter;i++)
								{
								//uzupelniamy odpowiedz
								if (odpowiedz!=sekwencja[i])
									{
										throw("Pomylileœ siê! ");
										break;	
									}
								 else if (odpowiedz==sekwencja[i])
									{
										
										throw("Nastêpny poziom");
										iter++;
										
									}
								}
	
						}
					 while (wynik_rozgrywki=true);	
					}
					break;
			case 2:
				{
					system("cls");
					cfi.dwFontSize.X = 40;			//nowa wartosc
					cfi.dwFontSize.Y = 30;			//nowa wartosc
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);  //akcept
					cout<<"-----INSTRUKCJA-----"<<endl;
					cout<<"NA EKRANIE POJAWI¥ SIÊ KOLORY W ODPOWIEDNIEJ KOLEJNOŒCI\n SPRÓBUJ POWTÓRZYÆ SEKWENCJÊ KOLORÓW W ODPOWIEDNIEJ KOLEJNOŒCI, ABY OSI¥GN¥Æ KOLEJNY LEVEL"<<endl;
					cout<<"STEROWANIE ODBYWA SIÊ ZA POMOC¥ KLAWISZY: "<<endl;
					cout<<"Q - ¯Ó£TY\n W - CZERWONY\n E - ZIELONY\n A - FIOLETOWY\n S - NIEBIESKI \n D - SZARY \n"<<endl;
					cout<<"Co teraz chcesz zrobiæ ?"<<endl;
					cout<<"1. NOWA GRA"<<endl;
					cout<<"2. INSTRUKCJA <-- TUTAJ JESTEŒ"<<endl;
					cout<<"3. AUTOR"<<endl;
					cout<<"4. KONIEC"<<endl;
					break;
					
				};
			case 3:
				{
					system("cls");
					cfi.dwFontSize.X = 40;			//nowa wartosc
					cfi.dwFontSize.Y = 30;			//nowa wartosc
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
				    cout<<"Projekt powsta³ na potrzeby studiów"<<endl;
				    cout<<"Co teraz chcesz zrobiæ ?"<<endl;
				    cout<<"1. NOWA GRA"<<endl;
					cout<<"2. INSTRUKCJA"<<endl;
					cout<<"3. AUTOR <-- TUTAJ JESTEŒ"<<endl;
					cout<<"4. KONIEC"<<endl;
				    break;
				
				};
			case 4:
				{
					system("cls");
					cfi.dwFontSize.X = 40;			//nowa wartosc
					cfi.dwFontSize.Y = 30;			//nowa wartosc
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
					cout<<"Do zobaczenia ..."<<endl;
					exit( 0 );
					break;
				};
			default:
				{
					system("cls");
					cout<<"Nie ma takiej opcji, wybierz ponownie"<<endl;
					cout<<"1. NOWA GRA"<<endl;
					cout<<"2. INSTRUKCJA"<<endl;
					cout<<"3. AUTOR"<<endl;
					cout<<"4. WYJŒCIE"<<endl;
					break;
				}
		}
	}while(wybor=4);
	return 0;
}		



