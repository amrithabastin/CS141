#include<iostream>
using namespace std;
/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value*/




int evensum(int f,int s)
	{
	 int sum=0;
	//add even numbers between f and s
	 for(int i=f+1;i<s;i++){
		if(i%2==0)
   			{ 
			    sum+=i;
			   }
		  }
	 return sum;
	}
/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
*/
int oddsum(int f,int s)
	{
	 int sum=0;
	//add odd numbers between f and s
	 for(int i=f+1;i<s;i++)
		  {
			if(i%2==1)
			   { 
			    sum+=i;
			   }
		  }
	 return sum;
	}
/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */
		
int oddsqsum(int f,int s)
	{
	 int sum=0;
	//add square of odd numbers between f and s
	 for(int i=f+1;i<s;i++)
		  {
			if(i%2==1)
			   { 
			    sum+=(i*i);
			   }
		  }
	 return sum;
	}
/*Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. */

int evensqsum(int f,int s)
	{
	 int sum=0;
	//add square of even numbers between f and s
	 for(int i=f+1;i<s;i++)
		  {
			if(i%2==0)
			   { 
			    sum+=(i*i);
			   }
		  }
	 return sum;
	}
/*Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values
*/


int main()
	{
	 //Input the numbers first num and second num
	 int firstnum,secondnum;
	 cout<<"enter the two numbers"<<endl;
	 cin>>firstnum>>secondnum;
	 //display
	 int sumEven,sumOdd,sumSquareEven,sumSquareOdd;

	//compute

	 sumEven=evensum(firstnum,secondnum);
	
	 sumOdd=oddsum(firstnum,secondnum);

	 sumSquareEven=evensqsum(firstnum,secondnum);

	 sumSquareOdd=oddsqsum(firstnum,secondnum);

	//print all results
	
	 cout<<"Even Sum:"<<sumEven<<endl;
	 cout<<"Odd Sum:"<<sumOdd<<endl;
	 cout<<"Odd Square Sum:"<<sumSquareOdd<<endl;
	 cout<<"Even Square Sum:"<<sumSquareEven<<endl; 

	return 0;
	}
