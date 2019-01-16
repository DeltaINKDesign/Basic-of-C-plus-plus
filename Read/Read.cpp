#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  ifstream pin;
  int rob;
  int suma = 0;


  cout << "\nSUMA LICZB CALKOWITYCH Z PLIKU\n";

  pin.open("plik.txt");

  if (!pin){
      cout << "\nBLAD OTWARCIA!\n";
      system ("Pause");
      return 1;
    }

  while (pin >> rob) {
    cout << rob << endl;
    suma += rob;
  }

  cout << "\n\n=========\n"
       << " SUMA = " << suma << "\n\n\n";

  pin.close();


  system ("Pause");       
  return 0;
}

