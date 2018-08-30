//include library
#include<iostream>

using namespace std;

//main 
int main(){
	// itro
	cout<<"welcome to maxima finder"<<endl;
	//declare variables
	float a;
	float b;
	float c;
	//ask for input
	cout<<"please enter three numbers"<<endl;
	cin>>a>>b>>c;

	//compute
	//print
	if(a>b&&a>c){
		cout<<"maxima is "<<a<<endl;
		}
               
	else if (b>a&&b>c){
		cout<<"maxima is "<<b<<endl;
		}
	else{
		cout<<"maxima is "<<c<<endl;
		}
	return 0;
	}


