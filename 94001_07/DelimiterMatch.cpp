#include<iostream>
#include<conio.h>
using namespace std;
#include "add_header.h"
int main()
{
	string str;
	Stack<char>ob;
	ob.size_of_stack();
	cout<<"Enter your expression : ";
	cin.ignore();
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		
		if(str[i]=='[' || str[i]=='{' || str[i]=='(')
		{
			ob.push(str[i]);
		}
		else if(str[i]=='/')
		{
			int check=0;
			i++;
			if(str[i]=='*')
			{
				ob.push(str[--i]);
				i=i+2;
				if(i<str.length())
				{
					for(;i<str.length();i++)
					{
						if(str[i]=='*')
						{
							i++;
							if(str[i]!='/')
							{
								cout<<"Delimiter match unsuccessful....\n";
								check=-1;
								break;
							}
							else
							{
								ob.pop();
							}
						
							break;
						}
						if(i==str.length()-1)
						{
							cout<<"Delimiter match unsuccessful...\n";
							check=-1;
							break;
						}
					}
				}
				else
				{
					cout<<"Delimiter match unsuccessful...\n";
					break;
				}
				if(check==-1)
				{
					break;
				}
			}
			i--;
		}
		else if(str[i]==']' || str[i]=='}' || str[i]==')')
		{
			char ch=ob.pop();
			if(str[i]==']' && ch!='[')
			{
				cout<<"Delimiter match unsuccessful....\n";
				break;
			}
			else if(str[i]=='}' && ch!='{')
			{
				cout<<"Delimiter match unsuccessful...\n";
				break;
			}
			else if(str[i]==')' && ch!='(')
			{
				cout<<"Delimiter match unsuccessful...\n";
				break;
			}
		}
	}
	if(top<0)
	{
		cout<<"Delimiter match successful....\n";
	}
	for(int i=0;i<=top;)
	{
		cout<<ob.pop()<<endl;
	}
	getch();
	return 0;
}
