#include <iostream>

using namespace std;
int m;
int n;
int main()
     {
	cout<<"Wprowadz liczbe: ";
	cin>>n;
	cout<<"Wprowadz 2 liczbe: ";
	cin>>m;
	
	
    for (int i=0; i<n; i++)
	{
		
		for(int j=0; j<m; j++)
		{
			if (j>0&&j<m-1&&i>0&&i<n-1)
			{
				cout<<" ";
			}
		      else
		      cout<<"*";
			
			
			
		}
       		cout<<endl;
	}

	
	return 0;
}
