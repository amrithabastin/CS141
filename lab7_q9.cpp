#include<iostream>
using namespace std;
int fac(int n){
	if(n==0){
		return 1;
	}
	else{
	return n*fac(n-1);
	}
}

int main(){
	int n;
	cout <<"please enter number to be factorialed"<<endl;
	cin>>n;
	cout <<endl<<" required factorial is "<<fac(n)<< endl;
	return 0;
}
