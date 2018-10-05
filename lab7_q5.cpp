#include<iostream>
using namespace std;

int print(int  i,int b, int a){
	if (i<b-2){
	
	i=i+2;
	a=a+i;
	print(i, b,a);}
	else{cout<<a<<endl;
	return 0;}
}











int main(){ int a , b;
//ask for range 
	cout<<" please enter required range"<<endl;
	cin>>a;
	cout<<" to ";
	cin>>b;
// check if first number is odd or even 
	if (a%2==0){
		cout<<" sum of even numbers are"<<endl;
		print(a+2,b,0);
		cout<<"sum of odd numbers are"<< endl;
		print(a+1 ,b,0);}
	else{
		cout<<" sum of even numbers are"<<endl;
		print (a-1,b,0);
		cout<<"sum of odd numbers are"<< endl;
		print (a,b,0);}

}
