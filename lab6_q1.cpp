/*
Tax Rate Calculation using Functions

*/
#include<iostream>
using namespace std;
/*Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/
void ask(int &a,int &b ,int &c){
	//ask user for values 
  	cout<<"please enter following details"<<endl;
	cout<<"no.units: ";
	cin>>a;
	cout<< endl;
	cout<<"unit cost: ";
	cin>>b;
	cout<<endl;	
	cout<<"tax rate: ";
	cin>>c;
	cout<<endl;
	}
/*Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/
void compute(int a ,int b ,int c,int &s,int &td){
	s= a*b*c;
	td = (a*b)+s;

}
/*Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.*/


void readout (int a ,int b ,int c, int s, int td){
	cout<<"no.units: "<<a<< endl;
	cout<<"unit cost: "<<b<<endl;	
	cout<<"tax rate: "<<c<<endl;
	cout<<"sales tax : "<<s<<endl;
	cout<<"totalcost: "<<td<<endl;
}
/*Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above. 
*/
int main(){
	int units ,unitcst , taxrate ,salestax ,totaldue;
	ask(units ,unitcst ,taxrate );
	compute(units ,unitcst ,taxrate, salestax,totaldue);
	readout(units ,unitcst ,taxrate, salestax,totaldue);
	return 0;

}
