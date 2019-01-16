#include <cstdlib>
#include <iostream>
using namespace std;
 
void dec_to_bin(int liczba)
{
  int i=0,tab[31];
 
  while(liczba) //dopóki liczba bêdzie ró¿na od zera
  {
    tab[i++]=liczba%2;
    liczba/=2;
  }
 
 
  for(int j=i-1;j>=0;j--)
    cout<<tab[j];
}
 
int main()
{
  int liczba;
 
  cout<<"Podaj liczbê: ";
  cin>>liczba;
 
  cout<<liczba<<" po zamianie na postaæ binarn¹: ";
  dec_to_bin(liczba);
  cout<<endl;
 
  system("pause");
  return 0;
}
