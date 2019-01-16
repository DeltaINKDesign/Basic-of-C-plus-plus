#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sumaliczb(int a, int b);
//{  return a+b;}


int main(int argc, char* argv[])
{
  int l1=0, l2=0, l3=0;



  cout << "Podaj pierwsza liczbe =";
  cin >> l1;

  cout << "Podaj druga liczbe =";
  cin >> l2;

  l3=sumaliczb(l2,l1);

  cout << endl << "SUMA WYNOSI:" << endl;
  cout << l1 << "+" << l2 << "=" << l3 << endl << endl;

  system ("Pause");

  return 0;
}

int sumaliczb(int a, int b)
{return a + b;}

