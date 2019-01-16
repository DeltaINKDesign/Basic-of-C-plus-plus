#include <iostream>
using namespace std;
int x;
int y;
int i;
int j;
int wybor;
void wyswietlprostokat(int x, int y)
	{
	cout<<"Liczba 1: ";
	cin>>x;
	cout<<"Liczba 2: ";
	cin>>y;
	for (int i=0; i<x; i++)
		{
		for(int j=0; j<y; j++)
			{
			if (j>0 && j<y-1 && i>0 && i<x-1)
				{
				cout<<" ";
				}
		    else
		        cout<<"*";	
			}
       		cout<<endl;
		}
	}
void wyswietlkwadrat (int x)
	{
	cout<<"Liczba: ";
	cin>>x;
	for (int i=0;i<x;i++)
		{
		for (int j=0; j<x; j++)
			{
			if (j>0 && j<x-1 && i>0 && i<x-1)
				{
				cout<<" ";
				}
			else
				cout<<"*";
			}
			cout<<endl;
		}
	}
	
void wyswietltrojkat (int x, int y)
{
	for( int j = 0; j < 2*x+3; ++j ) cout << "*";
	for( int i = 1; i <= y; ++i )
		{
    		cout << "*";
    
  
    			for( int j = 0; j < x-i; ++j ) cout << " ";
    			for( int j = x-i; j < x; ++j ) cout << " *";

    
    				for( int j = 0; j <= x-i; ++j ) cout << " ";

     
    						cout << "*\n";
		}
	for( int j = 0; j < 2*x+3; ++j ) cout << "*";  

}
int main() 
	{
	
	
	
	cout<<"--------MENU-------"<<endl;
	cout<<"1) PROSTOKAT"<<endl;
	cout<<"2) KWADRAT"<<endl;
	cout<<"3) TROJKAT"<<endl;
	cout<<"4) KONIEC"<<endl;
	cin>>wybor;
	switch(wybor)
		{
		case 1:
			{
		    wyswietlprostokat(x , y);
			break;
			}
        
        case 2:
        	{
        	wyswietlkwadrat(x);
        	break;
			}
			
		case 3:
			{
			wyswietltrojkat(x,y);
			break;
			}
		case 4:
			{
			cout<<"KONIEC";
			break;
			}
		}
	return 0;
	}
