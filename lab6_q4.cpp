#include<iostream>
using namespace std;



//OPTION A


//ask for values
int ask(int a){
	cout<< "enter number"<<endl;
	cin>>a;
	return a;
	}


/*(By Value) Write a program with a function that takes two int parameters, finds the minimum, then returns the minimum.
*/


int findmin(int a, int b, int min){
//compute minimum and store
	if(a>b){
		min= b;}
	else if (b>a){
		min=a;}
	else{
		cout<<"both are equal";
	min=0;	}
//return minimum
	return min;
	}


//OPTION B

void ask2(int &a,int &b){
	cout<< "enter numbers"<<endl;
	cin>>a>>b;
	}
int findmin2(int a, int b, int &min){
//compute minimum and store
	if(a>b){
		min= b;}
	else if (b>a){
		min=a;}
	else{
		cout<<"both are equal";
	min=0;	}
	}

void printout(int a){
	cout<<"the minimum among them is "<<a<<endl;
	}
int main(){

//part a
	int r , p, q, m ,k , l;
	p=ask(p);
	q=ask(q);
	m=findmin(p,q,m);
	if(m!=0){
		printout(m);
		}

	else{	
		cout<<" so no minimum"<<endl;
		}

	
//part b

	ask2(k,l);
	findmin2(k,l,r);
	if(r!=0){
		printout(r);
		}

	else{	
		cout<<" so no minimum"<<endl;
		}

	



	}
