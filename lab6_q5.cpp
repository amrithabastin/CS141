







#include <iostream>
using namespace std;
/* Write a program with a function that takes two int parameters, adds them together, then returns the sum*/
/*SUM 
(By Value). The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.*/


void progm(int &x){
	cout<<"pls select required operation :"<<endl;
	cout<<"1)finding sum"<<endl;
	cout<<"2)finding maximum"<<endl;
	cout<<"3)finding minimum"<<endl;
	cin>>x;
	;
}






int sum(int a, int b){
	
	return a+b; 
}
/*
(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/
void sum2( int a, int b ,int &tot){
	tot= a+b;
	cout<<"b)their sum is"<<tot<<endl; 	

	}



//ask for values
int ask(int a){
	cout<< "enter number"<<endl;
	cin>>a;
	return a;
	}

void ask2(int &a ,int&b){
	cout<< "enter numbers"<<endl;
	cin>>a>>b;	
		}

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
void printoutx(int a){
	cout<<"the maximum among them is "<<a<<endl;
	}



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




void findmin2(int a, int b, int &min){
//compute minimum and store
	if(a>b){
		min= b;}
	else if (b>a){
		min=a;}
	else{
		cout<<"both are equal";
	min=0;	}
	}

void printoutn(int a){
	cout<<"the minimum among them is "<<a<<endl;
	}



int main(){

	int z;
	progm(z);
	if (z==1){
		int s,t,p;
		// ask for two numbers
		cout<<"enter two numbers"<< endl;
		cin>>s>>t;
		//print sum
		//part a
		cout<<"a)their sum is"<< sum(s,t)<<endl;
		//part b
		sum2(s,t,p);
		return 0;
		}
	else if(z==2){

			int p, q, m ,l ,k ,r;
	//part a	
		cout <<"opt a"<<endl;	
		p=ask(p);
		q=ask(q);
		m=findmax(p,q,m);
		if(m!=0){
			printoutx(m);
			}
	
		else{	
			cout<<" so no maximum"<<endl;
			}
	
	//part b
		cout<<" opt b"<<endl;
		ask2(k,l);
		findmax2(k,l,r);
		if(r!=0){
			printoutx(r);
			}
	
		else{	
			cout<<" so no maximum"<<endl;
			}
	
		return 0;
		}
	

	else{

	//part a
		int r , p, q, m ,k , l;
		p=ask(p);
		q=ask(q);
		m=findmin(p,q,m);
		if(m!=0){
			printoutn(m);
			}
	
		else{	
			cout<<" so no minimum"<<endl;
			}
	
		
	//part b

		ask2(k,l);
		findmin2(k,l,r);
		if(r!=0){
			printoutn(r);
			}

		else{	
			cout<<" so no minimum"<<endl;
			}

	

		return 0;			

	}




		return 0;}





















/////////////// sum main






///////////////////////////////////// max ////////////////////////////////////////




/*(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum.
*/





//OPTION B


/*int main(){
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



////////////////////////////////// MINI //////////////////////////////////////////







//ask for values
int ask(int a){
	cout<< "enter number"<<endl;
	cin>>a;
	return a;
	}
*/

/*(By Value) Write a program with a function that takes two int parameters, finds the minimum, then returns the minimum.
*/



//OPTION B

/*void ask2(int &a,int &b){
	cout<< "enter numbers"<<endl;
	cin>>a>>b;
	}

int main(){
*/
	

	

