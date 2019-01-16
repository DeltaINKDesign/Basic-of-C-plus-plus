#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int max=0, i,j;
	cout<<"podaj wielkosc tablicy";

	cin>>max;
	int tablica[max];





	int tabliczka[5][2]={{1,1},{2,2},{3,3},{4,4},{5,5}};
	
	
	for(i=0; i<max; i++)
	{
	tablica[i]=2*i;
	
	}
	
	
	i=0;
	for(i=0; i<max; i++)
	{cout<<tablica[i]<<endl;
	}
	cout<<endl<<endl;
	
	

	i=0; j=0;


	for(i=0;i<5;i++){
		for(j=0;j<2;j++)
		{cout<< tabliczka[i][j]<<" ";
		}
	cout<<"\n";	
	}
	
	
	
	
	
	return 0;
}
