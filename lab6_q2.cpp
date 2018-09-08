

#include <iostream>
using namespace std;
/* Write a program with a function that takes two int parameters, adds them together, then returns the sum*/
/*SUM 
(By Value). The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.*/
int sum(int a, int b){
	
	return a+b; 
}
/*
(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/
void sum2( int a, int b ,int &tot){
	tot= a+b;
	cout<<"b)their sum is"<<tot<<endl; 	

	}
int main(){
	int s,t,p;
	// ask for two numbers
	cout<<"enter two numbers"<< endl;
	cin>>s>>t;
	//print sum
	//part a
	cout<<"a)their sum is"<< sum(s,t)<<endl;
	//part b
	sum2(s,t,p);
	return 0;
}


