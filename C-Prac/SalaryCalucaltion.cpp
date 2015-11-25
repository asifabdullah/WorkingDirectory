/*In this program we will take a salary input,a year count input and an increment value input
	and calculate the salary of the employee
Author:Md Asif Abdullah
Date:05-10-2015
language:C++
*/
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	float salary;
	int year,incrementPercantage;
	cout<<"Enter salary amount:";
	cin>>salary;
	cout<<endl;
	cout<<"Enter year count:";
	cin>>year;
	cout<<endl;
	cout<<"Enter increment percentage:";
	cin>>incrementPercantage;
	cout<<endl;
	for(int i=1;i<=year;i++)
	{
		salary+=salary*(incrementPercantage*.01);
	}
	cout<<"Salary after "<<year<<" years becomes "<<floor(salary);
}
