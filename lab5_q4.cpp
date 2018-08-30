//include library
#include<iostream>

using namespace std;

//main 
int main(){
	// itro
	cout<<"welcome "<<endl;
	//declare variables
	int a;
	//ask for input
	cout<<"please enter a number"<<endl;
	cin>>a;

	//compute
	//conditions
	//print
	if ((a%5==0)&&(a%11==0)){
		cout<<"number is divisible by both 5 and 11"<<endl;
		}
	else if ((a%5==0)&&(!(a%11)==0))
		{
		cout<<"number is dividible by only 5 and not 11"<<endl;
		}
	else if ((!(a%5)==0)&&(a%11==0)){
		cout<<"number is divisible only by 11 and not 5"<<endl;
		}
	else  {
		cout<<"number is not divisible by either 5 or 11"<<endl;
		}
	return 0;

	}

