#include<iostream>
using namespace std;
//function to print
int print(int i ){
	
	
	if (i<1){
		return 0;}
	else{
		cout<<i<<endl;
		i--;
		print(i);
	}
}
// main function 
int main(){int i;
	cout<<"plse enter a natural number"<<endl;
	cin>>i;
	
	print(i);
	return 0;
}
	
