#include<iostream>
#include<conio.h>
using namespace  std;
template <class TYPE>
class stack<TYPE>
{
	private:
		int l;
		int top;
		TYPE *s;
	public:
		stack (int L);
		stack (stack &ob);
		void push(TYPE x);
		TYPE pop();
		bool isfull();
		bool isempty();
		TYPE seek();
		void input();
};
template <class TYPE>
stack <TYPE>::stack (stack &ob)
{
	l=ob.l;
	top=ob.top;
	if(top!=-1)
	{
		for(int i=0;i<top+1   ;i++)
		{
			s[i]=ob.s[i];
		}
	}
}
template <class TYPE>
void stack<TYPE>::input()
{
	cout<<"Enter stack length: ";
	cin>>l;
	s=new TYPE[l];
	top=-1;
}
template <class TYPE>
stack<TYPE>::stack(int L)
{
	l=L;
	s=new TYPE[l];
	top=-1;
}
template <class TYPE>
bool stack<TYPE>::isempty()
{
	if (top<0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <class TYPE>
bool stack<TYPE>::isfull()
{
	if (top>=l-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <class TYPE>
void stack<TYPE>::push (TYPE el)
{
	if(!isfull())
	{
		s[++top]=el;
	}
	return;
}
template <class TYPE>
TYPE stack<TYPE>::pop()
{
	if(!isempty())
	{
		return s[top--];
	}
}
template <class TYPE>
TYPE stack<TYPE>:: seek()
{
	return s[top];
}


