#include<iostream>
using namespace std;
//function to print
int print (int i, int b){
	if (i<b){
	cout<<i<<endl;
	i=i+2;
	print(i, b);}
	else{
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
		cout<<" even numbers are"<<endl;
		print(a+2,b);
		cout<<"odd numbers are"<< endl;
		print(a+1 ,b);}
	else{
		cout<<" even numbers are"<<endl;
		print (a+1,b);
		cout<<"odd numbers are"<< endl;
		print (a+2,b);}
// add 2 ,add 1
	}
