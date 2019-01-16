#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	int warunek=0;
	cout<<"wczytaj warunek";
	cin>>warunek;
	
while(warunek!=0)
	{cout<< "Petla while wykonala sie\n Wczytaj nowy warunek";
	cin>>warunek;
	}
	
	
	
	
	do{
	cout<< "Petla while wykonala sie\n Wczytaj nowy warunek";
	cin>>warunek;
	}while(warunek!=0);
	

	
	
	switch(warunek){
		case 1:
			cout<<"warunek wynosi 1";
			
			break;
		
		case 2:
			cout<<"warunek wynosi 2";
			
			
			
			break;
		

		default:	
		cout<<"waunek rozny od 1 i 2";
		break;
}		
	
		


	if(warunek!=0){
		cout<<"warunek rozny od zera";
		
		
	}
	else{
		
	cout<<"warunek rowny zero";
	}

	
	
	
	
	return 0;
}
