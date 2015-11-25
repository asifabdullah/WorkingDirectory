/*In this program we will take an input and detemine whether it's number or not
Author:Md Asif Abdullah
Date:05-10-2015
language:C++
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//we will use this function to determine that our input is an even number
bool evenCheck(int input)
{
	if(input%2==0)
		return true;
	else 
		return false;
}
//we will use this function to determine that our input is an odd number
bool oddCheck(int input)
{
	if(input%2!=0)
		return true;
	else 
		return false;
}
//we will use this function to determine that our input is a prime number
bool primeCheck(int input)
{
	if (input <= 1) 
		return false; // zero and one are not prime
    for (int i=2; i*i<=input; i++) {
        if (input % i == 0) 
			return false;
    }
    return true;
	
}
//we will convert the input to number
int convertToNumber(char a[])
{
	int c, sign, offset, n;
 	// Handle negative integers
  	if (a[0] == '-') 
	{  
    	sign = -1;
  	}
	 // Set starting position to convert
  	if (sign == -1) 
	{ 
    	offset = 1;
  	}
  	else 
  	{
    	offset = 0;
  	}
 
  	n = 0;
 
  	for (c = offset; a[c] != '\0'; c++) 
	{
    	n = n * 10 + a[c] - '0';
  	}
 
  	if (sign == -1) 
	{
    	n = -n;
  	}
 
  	return n;
}
//we will check if the input is number or not
bool checkInput(char input[])
{
	int length,i; 
	//this condition is for negative number
	if(input[0]=='-')
	  	i=1;
	else
		i=0;
    length = strlen (input);
    for (i;i<length; i++)
        if (!isdigit(input[i]))
        {
            return false;
        }
}
int main()
{	
	char input[100];                        //input value
	cout<<"Please enter an input:";
	cin>>input;
	cout<<endl;
	if(checkInput(input))
	{
		int number=convertToNumber(input);
		if(primeCheck(number)&&oddCheck(number))
		{
			cout<<"It is a prime and odd number and the sum of square and cude ofthis number is:"<<pow(number,2)+pow(number,3)<<endl;
		}
		else if(primeCheck(number))
		{
			cout<<"It is a prime number and the square of this number is:"<<pow(number,2)<<endl;
		}	
		else if(evenCheck(number))
		{
			cout<<"It is a even number and the square of this number is:"<<pow(number,2)<<endl;
		}
		else if(oddCheck(number))
		{
			cout<<"It is a odd number and the cude of this number is:"<<pow(number,3)<<endl;
		}
	}
	else
		cout<<input<<endl;	
}
