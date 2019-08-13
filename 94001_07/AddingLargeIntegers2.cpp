#include<iostream>
#include<conio.h>
using namespace std;
#include "add_header.h"
int main()
{
	string str1,str2;
	char str3[20];
	Stack<char>ob1;
	ob1.size_of_stack();
	cout<<"Enter your first number : ";
	cin.ignore();
	getline(cin,str1);
	Stack<char>ob2;
	ob2.size_of_stack();
	cout<<"Enter your second number : ";
	cin.ignore();
	getline(cin,str2);
	cout<<"Your first number is : ";
	cout<<str1<<endl;
	cout<<"Your second number is : ";
	cout<<str2<<endl;
	if(str1.length()>str2.length())
	{
		swap(str1,str2);
	}
	for(int i=0;i<str1.length();i++)
	{
		ob1.push(str1[i]);
	}
	for(int i=0;i<str2.length();i++)
	{
		ob2.push(str2[i]);
	}
	Stack<char>ob3;
	ob3.size_of_stack();
	int i,carry=0;
	for( i=0;i<str1.length();i++)
	{
		int sum=(ob1.pop()-'0')+(ob2.pop()-'0')+carry;
		str3[i]=(sum%10 + '0');
		ob3.push(str3[i]);
		carry=sum/10;
	}
	for(int j=i;j<str2.length();j++)
	{
		int sum=(ob2.pop()-'0')+carry;
		str3[j]=(sum%10 + '0');
		ob3.push(str3[j]);
		carry=sum/10;
		i++;
	}
	if(carry)
	{
		str3[i]=(carry + '0');
		ob3.push(str3[i]);
		i++;
	}
	cout<<"Sum of the entered numbers is : ";
	for(int j=i-1;j>=0;j--)
	{
		cout<<ob3.pop();
	}
	cout<<endl;
	getch();
	return 0;
}
