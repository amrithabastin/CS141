#include<iostream>
using namespace std;
int main()
	{
	//declare variables
	int n;int i=0;
	//ask for number of rows 
	cout << "enter number "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	// some stars 
		for(int j=0; j<(5-i);j++){
			cout<<"*";}

		cout<<endl;
		}
	return 0;
	}
    
