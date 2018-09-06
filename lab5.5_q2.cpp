/* ****
   *  *
   *  *
   ****
 */  

#include<iostream>
using namespace std;
int main()
	{
	//declare variables
	int n;int i=0;
	//ask for number of rows or columns
	cout << "enter number "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	//print n stars for ist and last row
			if(i==0 || i==n-1){
				for(int j=0;j<n;j++){	
					cout<<"*";
					}
				cout<<endl;
	
					}
	//print one * n-2 spaces one *
			else{ cout<<"*";
				for(int j=0;j<n-2;j++){
					cout<<" ";

					}
				cout<<"*";
				cout<<endl;
				}
		}
	return 0 ;
	}
