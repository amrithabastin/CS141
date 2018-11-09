#include <iostream>
using namespace std;

int main()
{  	// declare char array and pointer
   	char c[10] ="abcde";
   	char* cptr;
   	cptr=c;
   	//using the loops
   	for(int i=10;i>=0;i--)
   	{
   	    cout<<*(cptr+i);
   	}
	cout<<endl;	
   	return 0;
}
