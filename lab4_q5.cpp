//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<" Hello.Welome to triangle angle finder "<<endl;
//declare variables
float a;
float b;
float c;
//ask for to angles
cout<<"please enter the first angle here"<<endl;
cin>>a;
cout <<"please enter second angle here "<<endl;
cin>>b;
//compute third angle
c=180-(a+b);

// print
cout<< " The required angle is "<<c<<endl;
}

