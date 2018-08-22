//include library
#include<iostream>
using namespace std;
//rite main function
int main(){
//intro
cout<<" Hello.Welome to fahrenheit to celcius converter"<<endl;
//declare variables
float c;
float a;
float f;
//ask for temp in faren 
cout<<" please enter temp. in fahrenheit here"<<endl;
cin>>f;
// convert
a=f-32;
c=a/1.8;
// print
cout<<" the required temp. in celcius is "<<c<<endl;
}
