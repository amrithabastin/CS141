//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<" Hello.Welome to celcius to fahrenheit converter"<<endl;
//declare variables
float c;
float f;
float a;
//ask for temperature in celcius
cout<<" Please enter temp. in celsius here"<<endl;
cin>>c;

//convertion
a=c*1.8;
f=a+32;
//print
cout<<"the required temprature in fahrenheit is "<<f<<endl; 
}

