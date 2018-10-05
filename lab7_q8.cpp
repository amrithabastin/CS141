#include<iostream>
using namespace std;
int dsum(int n ,int a, int i ){

	a=n%10;
	if(a==0){
		return i;}
	else{
		i=i+a;
		dsum(n/10 ,a ,i);
		}
	}
int main (){
	int n;
	cout<< "enter number"<<endl;
	cin>>n;
	cout<<" required sum is "<<dsum(n,0,0)<<endl;
	return 0;

}
