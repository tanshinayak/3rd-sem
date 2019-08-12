#include<iostream>
#include<conio.h>
#include "StackTemplate.h"
using namespace std;

bool DelimiterCheck(string str)
{
	char ch;
	stack <char> s(20);
	int i=0;
	for(;i<str.length();i++)
	{
		if(s.seek()!='*' or str[i]=='*')
		{
			switch(str[i])
			{
				case '(':
				case '[':
				case '{':
					{
						cout<<"Pushed: "<<str[i]<<endl;
						s.push(str[i]);
						break;
					}
				case '/':
					{
						if(i<str.length()-1 and str[i+1]=='*')
						{
							cout<<"Pushed :"<<str[i]<<str[i+1]<<endl;
							s.push(str[i]);
							s.push(str[i+1]);
						}
						i++;
						break;
					}
				case '*':
					{
						//cout<<"closed case";
						if(i<str.length()-1 and str[i+1]=='/')
						{
							//cout<<"in 1"<<endl;
							if(!s.isempty())
							{
								cout<<"Popped :"<<s.pop();
								cout<<s.pop()<<endl;
								i++;
							}
							else
							{
								return false;
							}
						}
						break;
					}
				case ')':
				case ']':
				case '}':
					{
						if(!s.isempty())
						{
							ch=s.pop();
							cout<<"Popped: "<<ch<<endl;
							if(str[i]==')' and ch!='(')
							{
								return false;
							}
							else if(str[i]=='}' and ch!='{')
							{
								return false;
							}
							else if(str[i]==']' and ch!='[')
							{
								return false;
							}
						}
						else
						{						
							return false;
						}
						break;
					}
				default:
				{
					continue;
				}					
			}
		}
		else
		{
			continue;
		}
	}
	if (s.isempty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string s;
	cout<<"Enter String: ";
	getline(cin,s);
	if(DelimiterCheck(s))
	{
		cout<<"Success";
	}
	else
	{
		cout<<"Error";
	}
	getch();
}
