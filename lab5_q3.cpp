//include library
#include<iostream>

using namespace std;

//main 
int main(){
	// itro
	cout<<"welcome to sign recogniser"<<endl;
	//declare variables
	float a;
	//ask for input
	cout<<"please enter number"<<endl;
	cin>>a;
        //conditions
	//print
	if (a>0){
		cout<< "it is positive"<<endl;
		}
	else if(a<0){
		cout<<"it is negetive"<<endl;
		}
 	else{
		cout<<"it is equal to 0"<<endl;
		}
	return 0;
	}
