#include<iostream>
using namespace std;
//function to print

int sum (int i,int n ,int a)
	{
// stop
	if(i==n){
		cout<<"required sum is "<< a<<endl;
		}
//compute sum
	else{
		i++;
		a=a+i;
		sum(i,n,a);
	}
}
// main functn
int main(){
	int n;
	cout << " please enter number"<< endl;
	cin >> n;
	sum(0,n,0);
	return 0;

}
