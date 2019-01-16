#include <windows.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
/*
   HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    cout << "Standart" << endl << endl;
    
    SetConsoleTextAttribute( hOut, BACKGROUND_RED |FOREGROUND_BLUE| FOREGROUND_INTENSITY );
    cout << "Czerwone tlo zwykly tekst" << flush << endl << endl;
   
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_RED );
    cout << "XXXXXXXX" << flush << endl << endl;
      
      
    SetConsoleTextAttribute( hOut, BACKGROUND_GREEN );
    cout << "Ten napis ma zielone tlo" << flush << endl;
*/

  

system("COLOR 1B");  // pierwszy znak t³o druki czcionka;


   system("COLOR 1B");
   cout<< "kolor wybrany"<<endl;
   Sleep(2000);

   system("COLOR 6C");
   cout<< "kolor wybrany";
    system( "PAUSE" );
    return 0;
}

