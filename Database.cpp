#include <iostream>
#include <vector>

using namespace std;
struct person 
{
	string firstName;
	string lastName;
	int Birth;
	char gender;
};

void print (person nazwa)
{
	cout<<"Imie: "<<nazwa.firstName<<endl;
	cout<<"Nazwisko: "<<nazwa.lastName<<endl;
	cout<<"Data: "<<nazwa.Birth<<endl;
	if (nazwa.gender=='m')
	{
		cout<<"Plec: Men";
	}
	else if (nazwa.gender=='w')
	{
		cout<<"Plec: Woman";
	}
}

void printall (vector<person> all)
{
	for(int i=0; i<=all.size()-1; i++)
	{
		print(all[i]);
		cout<<endl;
	}
}

int search (vector<person> searchall, int a)
{
	for (int i=0; i<=searchall.size()-1; i++)
	{
		
		if (a==searchall[i].Birth)
		{
		 return i;
		}
			
	}	
	
	return -1;
}

int main()

{
	int b;

	vector <person> persons;
	person p1={"Stefan","Batory",1990,'m'};
	person p2={"£ukasz","Mot",1998,'w'};
	persons.push_back(p1);
	persons.push_back(p2);
   /* printall(persons);*/
   cout<<"Wybierz rok: "<<endl;
   cin>>b;
   int a=  search(persons, b);
	if(a==-1)
	{
		cout<<"Nie ma";
	}
	else 
	{
		print(persons[a]);
	}
		
	return 0;
}

