#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// pelny prostok¹t lub pelny kwadrat w pêtli for 
int main(int argc, char** argv) {
	int x,y,j,i,akcja;
	do{
		cout<<"Witaj.\nNarysuje Ci prostokat, lub kwadrat. Wybierz: "<<endl;
		cout<<"1.Kwadrat\n2.Prostokat\n3.Koniec\nWybieram: ";
		cin>>akcja;
		
		switch(akcja)
		{
			case 1:
				cout<<"Podaj dlugosc boku: ";
				cin>>x;
				for(i=0;i<x;i++)
				{
					for (j=0;j<x;j++)
					{
						cout<<"*";
					}
				cout<<endl;
				}
				break;
			case 2:
				cout<<"Podaj dlugosc boku wysokosci: ";
				cin>>x;	
				cout<<"Podaj dlugosc boku szerokosci: ";
				cin>>y;
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++){
					
					cout<<"*";}
					cout<<endl;
				}
				break;
		}
	}while(akcja!=3);
		return 0;
}
