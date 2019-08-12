#include <iostream>
#include <conio.h>
#include "mistack.h"
using namespace std;

int main()
{
	string num1;
	string num2;
	cout<<"Enter First positive int.:";
	getline(cin,num1);
	cout<<"Enter Second positive int.:";
	getline(cin,num2);
	stack<char> s1(num1.length());
	stack<char> s2(num2.length());
	stack<int> ans(num1.length()>num2.length()? num1.length()+1:num2.length()+1);
	char carry = '0';
	int a;
	for(int i=0; i<num1.length(); i++)
		s1.push(num1[i]);
	for(int i=0; i<num2.length(); i++)
		s2.push(num2[i]);	

	while(!s1.isEmpty() || !s2.isEmpty())
	{
		if(!s1.isEmpty() && !s2.isEmpty())
		{
			a = int(s1.pop()+s2.pop()+carry-3*48);	
		}
		else if(!s1.isEmpty())
		{
				a = int(s1.pop()+carry-2*48);	
		}
		else
		{
			a = int(s2.pop()+carry-2*48);
		}
		carry = '0';
		if(a/10 != 0)
		{
			carry = a/10 + 48;
			a = a%10;
//			cout<<"Carry: "<<carry<<"	a:"<<a<<endl;
		}
		ans.push(a);
	}
	if(carry != '0')
		ans.push(carry - 48);
		
	cout<<"Ans:";
	while(!ans.isEmpty())
	{
		cout<<ans.pop();
	}
	getch();
	return 0;
	
}












