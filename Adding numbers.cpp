#include <iostream>
using namespace std;

//Funkcja wy�wietlaj�ca sume dw�ch liczb
int suma(int a,int b)
{
	return a+b;
}


int main(int argc, char** argv)
 {
	int a,b;
	cin>>a>>b;
	cout<<suma(a,b);
	
	return 0;
}
