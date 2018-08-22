//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<" Hello.Welome to time converter"<<endl;
//declare variables
int i;
int y;
int a;
int w;
int d;
//ask for input in days
cout<<"enter no. of days";
cin>> i;
// convert to yrs , weeks and days
y= i/365;
a=i%365;
w=a/7;
d=w%7;
// print
cout<<"the given data contains "<<y<<"yrs "<<w<<"weeks and "<<d<<"days (*does not take leap yrs into consideration)"<<endl;
}


