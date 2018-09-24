#include<iostream>
using namespace std;

/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/

char toUpper(char d)
	{
	 //check if it is lower case
	if(d>96&&d<123)
		   {
			//Lower case conversion 
    			d=d-32;
   			}
	else cout<<"The character is not in lowercase "<<endl;
  	return d;
	}

/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.*/

char toLower(int d)
	{

	 //check if it is lower case
	  if(d>64&&d<91)
	   {
		//Lower case conversion 
		    d=d+32;
		
	   }
	  else {
		cout<<"The character is not in Uppercase"<<endl;
		}
	  return d;
	}

 /*Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display 
the upper case value and vice-versa.*/


int main()
	{
	//Input character
	 int c;
	 cout<<"Enter ASCII code for letter"<<endl;
	 cin>>c;
	 if(c>64&&c<91)
		 {
		  c=toLower(c);
		  cout<<"Lowercase letter: "<<char(c)<<endl;
		 }
	 else if(c>96&&c<123)
 		{
 		 c=toUpper(c);
		 cout<<"Uppercase letter: "<<char(c)<<endl;
 		}
	 else
 		{
		cout<<"Charecter for Letter is not entered"<<endl;
		}
	return 0;
	}
