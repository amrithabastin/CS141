#include<iostream>

using namespace std;

//declaring class

class rect{
	
	//acess

	public:
	
	//properties

	
	float b;
	float l;
	//pe declaed inside

	float getPer(void);  
	//area  function declared inside
	float getAr(void)
	{
		return l*b;
		}
	};

//perimeter functin defined outside
float rect::getPer(void)
	{
	return 2*(l+b);
	}

// funtion tocompare rectangles
int max(int a, int b){
	if(a>b){ 
		cout <<"Rectangle1 ";
		}
	else{
		cout<<"Rectangle2 ";
		}
	return 0;	
	}
int main(){
	// declaing variables
	int x , y , q , p ;
	rect Rectangle1;
	rect Rectangle2;
	//assinging values tproperties of bjects in class , inputs
	cout<< "enter dimensions of Rectangle1"<<endl;
	cin>>Rectangle1.l;
	cout<<endl;
	cin>>Rectangle1.b;
	
	cout<<endl<<endl<<endl;
	
	cout<< "enter dimensions of Rectangle2"<<endl;
	cin>>Rectangle2.b;
	cout<<endl;
	cin>>Rectangle2.l;

	cout<<endl<<endl<<endl;

	x=Rectangle1.getAr();
	y=Rectangle2.getAr();
	q=Rectangle1.getPer();
	p=Rectangle2.getPer();
	
	//cmparing twoo rectangles
	if(x!=y){
		cout<<max(x,y)<<"has larger area of the two";

		}
	else{
		cout<<"Both have equal areas"<<endl<<endl;
		}
	if(p!=q){
		cout<<max(q,p)<<"has maximum perimeter"<<endl<<endl;
		}
	else{
		cout<<"Both have equal boundry length"<<endl<<endl;
		}
	return 0;
	} 


