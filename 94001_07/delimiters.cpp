#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
	public:
		char *arr;
		int top,size;
		Stack()
		{
			arr=new char[1];
			top=-1;
		}
		Stack(int s)
		{
			size=s;
			arr=new char[s];
			top=-1;
		}
		void push(char );
		char pop();
		bool isempty();
		bool isfull();
};
class Delimiters:public Stack
{
	string s;
	int l;
	public: 
		void input();
		void dm(string str);
};
void Stack::push(char x)
{
	if(!isfull())
	{
		top++;
		arr[top]=x;
	}else
	{
		cout<<"Stack Overflow"<<endl;
	}
}
bool Stack::isfull()
{
	if(top==size-1)
	{
		return true;
	}
	else 
	return false;
}
char Stack::pop()
{
	if(!isempty())
	{
		return arr[top--];	
	}
}
bool Stack::isempty()
{
	if(top==-1)
	return true;
	else
	return false;
}
void Delimiters::input()
{
	cout<<"enter the string "<<endl;
	getline(cin,s);
	l=s.length();
}
void Delimiters::dm(string str)
{
	Stack stc;
	char ch;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='('||s[i]=='['||s[i]=='{')
		stc.push(s[i]);
	}
	else if(s[i]=='/')
	{
		i++;
		if(s[i]=='*')
		{
			stc.push(s[--i]);
		}
	}
	else if(s[i]=='*')
	{
		
	}

}    
