//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<" Hello.Welome to marks calculator"<<endl;
//declare variables
float p;
float m;
float b;
float c;
float l;
float t;
float a;
float z;
//ask for input
cout<<"enter marks out of 50"<<endl;
cout<<"phy"<<endl;
cin>>p;
cout<<"math"<<endl;
cin>>m;
cout<<"bio"<<endl;
cin>>b;
cout<<"chem"<<endl;
cin>>c;
cout<<"lang"<<endl;
cin>>l;
//compute
t= p+m+b+c+l;
a=t/5;
z=a*2;

// print
cout<<"total marks are "<<t<<"out of 250"<<endl;
cout<<"average marks are "<<a<<endl;
cout<<"percentage is "<<z<<"%"<<endl;

}
