//include library
#include<iostream>

using namespace std;

//main 
int main(){
	// itro
	cout<<"welcome "<<endl;
	//declare variables
	int a;
	//ask for yr
	cout<<"please enter year"<<endl;
	cin>>a;
	//check if yr is divisible by four
	if (a%4==0){
		if(!(a%100==0)){
			cout<<a<<" is a leap year"<<endl;
			}
		//if yes see if divisile by 400
 		else{
			if(!(a%400==0)){
                		cout<<a<<" is not a leap year"<<endl;
				}
			else{
				cout<<a<<" is a leap year"<<endl;
			        }
 			}
		}
	
	//if no declare not leap yr
	else {
  		cout<<a<<" is not a leap year"<<endl;
		}
	}
	
