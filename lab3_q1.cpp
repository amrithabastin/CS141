//include library
#include<iostream>
using namespace std;
//use main function
int main () {
//put in an intro
cout<<"Hello"<<endl;
//declare the different types of variables 
//give vales to the variables aka difine the variables
int a = 1;
char b = 's';
float c = 5.6;
double doublevar = 1.3765453978;
bool boolvar =true;
//give cout commands to print the variables
cout<< "a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
cout<<"doublevar="<<doublevar<<endl;
cout<<"boolvar="<<boolvar<<endl;

 
//print the size of variables
cout<<" size of a="<<sizeof(a)<<endl;
cout<<"size of b="<<sizeof(b)<<endl;
cout<<"size of c="<<sizeof(c)<<endl;
cout<<"size of doublevar="<<sizeof(doublevar)<<endl;
cout<<"size of boolvar="<<sizeof(boolvar)<<endl;
//end the  program
return 0;
}
