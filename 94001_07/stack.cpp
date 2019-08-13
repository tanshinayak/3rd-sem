#include<iostream>
#include<conio.h>
using namespace std;
template<class TYPE>
class Stack
{
	TYPE *arr;
	int top,size;
	public:
		Stack()
		{
			arr=new TYPE[1];
			top=-1;
		}
		Stack(int s)
		{
			size=s;
			arr=new TYPE[s];
			top=-1;
		}
		void push(TYPE );
		TYPE pop();
		bool isempty();
		bool isfull();
		TYPE topel();
};
template<class TYPE>
void menu(Stack<TYPE>);
template<class TYPE>
void Stack<TYPE>::push(TYPE x)
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
template<class TYPE>
bool Stack<TYPE>::isfull()
{
	if(top==size-1)
	{
		return true;
	}
	else 
	return false;
}
template<class TYPE>
TYPE Stack<TYPE>::pop()
{
	if(!isempty())
	{
		return arr[top--];	
	}else{
		TYPE e;
		throw e;
	}
}
template<class TYPE>
bool Stack<TYPE>::isempty()
{
	if(top==-1)
	return true;
	else
	return false;
}
template<class TYPE>
TYPE Stack<TYPE>::topel()
{
	if(!isempty())
	return arr[top];
	else{
		TYPE e;
		throw e;
	}
}
