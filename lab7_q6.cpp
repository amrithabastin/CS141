#include<iostream>
using namespace std;
int rev(int a ,int n){
	a=n%10;
	if(a==0){
		return 0;}	
	else{
		cout<<a;
		rev(0,n/10);
	}
}
int main(){
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	rev(0,n);

	return 0;
	}
