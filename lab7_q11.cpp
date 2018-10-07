#include<iostream>
using namespace std;
int gcd(int a,int b,int t,int s)
{// for no common factor
	 if (t>b)
	   cout<<" the GCD of "<<s;
	  else
		{	
		if(b%t==0)
		   {
		   if(a%t==0)
		    s=t;
		    }
		t++;
		gcd(a,b,t,s);
	   return 0;
		}
	 return 0;
}	
int main()
	{int a,b;
 	cout<<endl<<" enter two numbers "<<endl;
	cout<<endl;
 	cin>>a>>b;
	cout<<endl;
	gcd(a,b,1,1);
 	return 0;
	}

