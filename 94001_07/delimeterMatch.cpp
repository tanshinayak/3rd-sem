#include<iostream>
#include<conio.h>
//#include<stdlib.h>
#include"stack.cpp"
using namespace std;
class Delimeters
{
	char ch;
	string s;
	Stack<char> stc;
	public:
		void input();
		void deli();
};
void Delimeters::input()
{
	cout<<"Enter your Expression : ";
	cin>>s;
}
void Delimeters::deli()
{
	for(int i=0;i<s.length();i++)
	{
		ch=s[i];
		if(ch=='('||ch=='[' ||ch=='{')
		{
			stc.push(ch);
		}else if(ch=='/')
		{
			ch=s[++i];
			if(ch=='*')
			{
				stc.push(ch);
			}else
			{
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
				//exit(100);
			}
		}/*else if(ch=='*')
		{
			ch=s[++i];
			if(ch=='/')
			{
				char c=stc.pop();
				if(c!='/')
				{
					cout<<"DElimiters do not match";
					//exit(100);
				}else
				{
					stc.push(c);
					continue;
				}
			}
		}*/else
		{
			continue;
		}
	}
}
int main()
{
	Delimeters del;
	del.input();
	del.deli();
	getch();
	return 0;
}

