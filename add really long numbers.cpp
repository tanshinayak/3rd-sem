#include <iostream>
#include <conio.h>
#include "mistack.h"
using namespace std;

int main()
{
	//Get numbers as strings
	string num1, num2;
	
	//Input Number 1
	cout<<"Enter First positive int.:";
	getline(cin,num1);
	
	//Input number 2
	cout<<"Enter Second positive int.:";
	getline(cin,num2);
	
	//Make stacks for numbers
	stack<char> s1(num1.length());
	stack<char> s2(num2.length());
	
	//Make stack for answer
	stack<int> ans(num1.length()>num2.length()? num1.length()+1:num2.length()+1);
	
	//Initialize helper variables
	char carry = '0';
	int a;
	
	//Push number 1 to stack
	for(int i=0; i<num1.length(); i++)
		s1.push(num1[i]);
		
	//Push number 2 to stack
	for(int i=0; i<num2.length(); i++)
		s2.push(num2[i]);	

	//Add numbers
	while(!s1.isEmpty() || !s2.isEmpty())
	{
		//Case when both have elements
		if(!s1.isEmpty() && !s2.isEmpty())
		{
			a = int(s1.pop()+s2.pop()+carry-3*48);	
		}
		
		//Case when just num1 has elements
		else if(!s1.isEmpty())
		{
				a = int(s1.pop()+carry-2*48);	
		}
		
		//Case when just num2 has elements
		else
		{
			a = int(s2.pop()+carry-2*48);
		}
		
		//Accounting for carry bit
		carry = '0';
		if(a/10 != 0)
		{
			carry = a/10 + 48;
			a = a%10;
		}
		
		//Pushing to answer stack
		ans.push(a);
	}
	
	//When carry is 1 after addition is complete
	if(carry != '0')
		ans.push(carry - 48);
		
	//Printing final answer
	cout<<"Ans:";
	while(!ans.isEmpty())
	{
		cout<<ans.pop();
	}
	getch();
	return 0;
}












