#include<iostream>
using namespace std;
int main()
	{
	//declare variables
	int n;int i=1;
	//ask for number of rows 
	cout << "enter number "<<endl;
	cin>>n;
	for(int i=1;i<n+1;i++){
	// some space 
		for(int j=0; j<(5-i);j++){
			cout<<" ";}
	//n stars
	for(int i=1;i<n+1;i++){
			cout<<"*";}
		cout<<endl;
		}
	return 0;
	}
    

