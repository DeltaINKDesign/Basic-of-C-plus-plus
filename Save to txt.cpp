#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  ofstream pout;
  int n;


  pout.open("plik1.txt");

  cout << "n=";
  cin >> n;

  while (n){
    pout << n << " "<<endl;
    cout << "n=";
    cin >> n;
  }

  pout.close();

  system ("Pause");
  return 0;
}

