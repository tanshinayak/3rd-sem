#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"stack.cpp"
using namespace std;
class delMatch
{
	char ch;

	public:
		Stack <char> stc;
		void input();
		void match();
};
void delMatch::input()
{
	cout<<"Enter the expression : ";
}
template<class TYPE>
void delMatch::match()
{
	while(cin>>ch)
	{
		if(ch=='('||ch=='[' ||ch=='{')
		{
			stc.push(ch);
		}else if(ch=='/')
		{
			cin>>ch;
			if(ch=='*')
			{
				stc.push(ch);
			}else
			{
				cin>>ch;
				continue;
			}
		}else if(ch==')'||ch==']'||ch=='}')
		{
			char mt=stc.pop();
			if(mt=='(')
			{
				mt=')';
			}else if(mt=='[')
			{
				mt=']';
			}else
			{
				mt='}';
			}
			if(mt!=ch)
			{
				cout<<"delimiters do not match ";
				exit(100);
			}
		}else if(ch=='*')
		{
			cin>>ch;
			if(ch=='/')
			{
				char c=stc.pop();
				if(c!='/')
				{
					cout<<"DElimiters do not match";
					exit(100);
				}else
				{
					stc.push(c);
					continue;
				}
			}
		}else
		{
			continue;
		}
	}
}
int main()
{
	delMatch del;

	try{
		del.input();
		del.match();
	}
	catch(...)
	{
		cout<<"Stack Underflow";
	}
	getch();
	return 0;
}
