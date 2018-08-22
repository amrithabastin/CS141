//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<"welcome to triangle area finder"<<endl;

// declare variables
float h;
float b;
float a;
//ask for input
cout<<" enter height of triangle(cm)"<<endl;
cin>>h;
cout<< "enter base length of triangle(cm)"<<endl;
cin>>b;

// compute
a=0.5*b*h;
//print
cout<<"the required area is "<<a<<"cm sq"<<endl;

}

