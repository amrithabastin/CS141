#include<iostream>

using namespace std;

//declaring class

class box{
	
	//acess

	public:
	
	//properties

	int height;
	int breadth;
	int length;
};

int main(){
	//declaing objects
	box box1;
	box box2;
	//and needed vaiables
	float volume= 0.0;
	//assinging values tproperties of bjects in class , inputs
	cout<< "enter dimensions of box1"<<endl;
	cin>>box1.height;
	cout<<endl;
	cin>>box1.breadth;
	cout<<endl;
	cin>>box1.length;
	cout<<endl<<endl<<endl;
	
	volume = box1.height*box1.breadth*box1.length;

	cout<<"volume of box1 is = "<<volume<<endl<<endl<<endl;

	cout<< "enter dimensions of box2"<<endl;
	cin>>box2.height;
	cout<<endl;
	cin>>box2.breadth;
	cout<<endl;
	cin>>box2.length;
	cout<<endl<<endl<<endl;


	//volume
	volume = box2.height*box2.breadth*box2.length;
	cout<<"volume of box2 is = "<<volume<<endl<<endl<<endl;


	return 0;
}
