/*MAXIMUM
 The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/
#include<iostream>
using namespace std;


//OPTION A


//ask for values
int ask(int a){
	cout<< "enter number"<<endl;
	cin>>a;
	return a;
	}


/*(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum.
*/

int findmax(int a, int b, int max){
//compute maximum and store
	if(a>b){
		max= a;}
	else if (b>a){
		max=b;}
	else{
		cout<<"both are equal";
	max=0;	}
//return maxium 
	return max;
	}




//OPTION B
void ask2(int &a ,int&b){
	cout<< "enter numbers"<<endl;
	cin>>a>>b;	
		}
void findmax2(int a, int b, int &max){
//compute maximum and store
	if(a>b){
		max= a;}
	else if (b>a){
		max=b;}
	else{
		cout<<"both are equal";
		max=0;}

 }
void printout(int a){
	cout<<"the maximum among them is "<<a<<endl;
	}
int main(){
	int p, q, m ,l ,k ,r;
//part a
	cout <<"opt a"<<endl;	
	p=ask(p);
	q=ask(q);
	m=findmax(p,q,m);
	if(m!=0){
		printout(m);
		}

	else{	
		cout<<" so no maximum"<<endl;
		}

//part b
	cout<<" opt b"<<endl;
	ask2(k,l);
	findmax2(k,l,r);
	if(r!=0){
		printout(r);
		}

	else{	
		cout<<" so no maximum"<<endl;
		}

	return 0;
	}

