#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct book
{
	string title;
	string author;
	int isbn;
	int amount;	
};
int main(int argc, char** argv) {
	vector <book> library;
	book b;
	menu:
		cout<<"MENU"<<endl<<"1.DODAJ KSIAZKE"<<endl<<"2.WYPOZYCZ"<<endl<<"3.ODDAJ"<<endl<<"4.WYSWIETL WSZYSTKIE"<<endl<<"5.WYSWIETL DOSTEPNE"<<endl;
		int wybor;
		cin>>wybor;
		switch(wybor)
		{
			case 1:
				cout<<"Podaj tytul: ";
				cin>>b.title;
				cout<<endl<<"Podaj autora: ";
				cin>>b.author;
				cout<<endl<<"Podaj numer ISBN: ";
				cin>>b.isbn;
				for(int i=0;i<library.size();i++)				
				{
					if(library[i].isbn==b.isbn)
					{
						cout<<"Taka biblioteka juz istnieje w bazie, jej indeks wynosi: "<<i<<endl;
						system("pause");
						system("cls");
						goto menu;
					}				
				}
				cout<<endl<<"Podaj ilosc dostepnych sztuk: ";
				cin>>b.amount;
				library.push_back(b);
				system("pause");
				system("cls");
				goto menu;
			case 2:
				cout<<"Podaj indeks ksiazki do wypozyczenia: ";
				int id;
				cin>>id;
				if(library[id].amount>0)
					library[id].amount--;
					cout<<endl<<"Aktualny stan tej ksiazki wynosi: "<<library[id].amount<<endl;
				if(library[id].amount==0)
				{
					cout<<"Ta ksiazka nie jest dostepna."<<endl;
					system("pause");
					system("cls");
					goto menu;
				}
					
				system("pause");
				system("cls");
				goto menu;
			case 3:
				cout<<"Podaj indeks ksiazki do oddania: ";
				cin>>id;
				library[id].amount++;
				cout<<endl<<"Aktualny stan tej ksiazki wynosi: "<<library[id].amount<<endl;	
			case 4:
				for(int k=0;k<library.size();k++)
				{
					cout<<library[k].title<<endl;
					cout<<library[k].author<<endl;
					cout<<library[k].isbn<<endl;
					cout<<library[k].amount<<endl;
					cout<<endl;
				}
			case 5:
				for(int k=0;k<library.size();k++)
				{
					if(library[k].amount>0)
					{
						cout<<library[k].title<<endl;
						cout<<library[k].author<<endl;
						cout<<library[k].isbn<<endl;
						cout<<library[k].amount<<endl;
						cout<<endl;		
					}

				}
	}
		

	
	return 0;
}


