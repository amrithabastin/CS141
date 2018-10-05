#include<iostream>
using namespace std;
// pow functn
int pow(int a , int b){
// stop
	if(b==0){
		return 1;}
// loop f(x)=a*f(x-1)
	else {
		return a*pow(a,b-1);}
	}
// main functn
int main(){int a,b;
	cout<< "enter number and power in sequence"<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<pow(a,b)<<endl;
	return 0;}
