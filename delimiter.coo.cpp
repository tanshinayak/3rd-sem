#include <iostream>
#include <conio.h>
#include "mistack.h"
using namespace std;
char map(char a);
int main()
{
	string a;
	getline(cin,a);
	stack<char> s(a.length());
	for(int i=0; i<a.length(); i++)
	{
		if (a[i]=='/' && a[i+1]=='*')
			s.push('&');
		else if (a[i]=='*' && a[i+1 ]=='/')
		{
			try{
				if ( s.pop() != '&' )
				{
					getch();
					return -1;
				}
			}
			catch(...)
			{
				cout<<"You have an extra closing expression!";
				getch();
				return -1;
			}
		}
		if (a[i]=='{' || a[i]=='[' || a[i]=='(' || a[i]=='<')
			s.push(a[i]);
		else if (a[i]=='}' || a[i]==']' || a[i]==')' || a[i]=='>' )
		{
			try{
				if (map(s.pop()) != a[i])
				{
					cout<<"Error encountered!\n Wrong delimiter at location "<<i<<"\n Check Expression";
					getch();
					return -1;	
				}
			}
			catch(...)
			{
				cout<<"You have an extra closing expression!";
				getch();
				return -1;
			}
		}		
	}
	
	if (s.isEmpty())
		cout<<"Your expression is correct!\n";
	else
	{
		cout<<"Error encountered!\nExtra delimiter\nCheck Expression";
		getch();
		return -1;
	}
	getch();
	return 0;
}
char map(char a)
{
	if (a == '{')
		return '}';
	else if (a == '[')
		return ']';
	else if (a == '(')
		return ')';
	else if (a == '<')
		return '>';
	return '~';
}
