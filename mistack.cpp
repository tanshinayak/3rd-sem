#include <iostream>
#include <conio.h>
using namespace std;

template <class type>
class stack{
	int top;
	int cap;
	type *p;
	public:
		stack(int n);
		type pop();
		void push(type n);
		void peek();
		bool isEmpty();
		bool isFull();
};

template <class type>
stack<type>::stack(int n)
{
	cap = n;
	p = new type[cap];
	top = -1;
}

template <class type>
void stack<type>::push(type n)
{
	if (isFull())
	{
		cout<<"Stack is full\n";
		return;
	}
	p[++top] = n;
	
}

template <class type>
type stack<type>::pop()
{
	if (isEmpty())
	{
		type a;
		throw a;
	}
	return p[top--];
}

template <class type>
void stack<type>::peek()
{
	if (isEmpty())
	{
		type a;
		throw a;
	}
	cout<<"Top element: "<<p[top]<<endl;
}

template <class type>
bool stack<type>::isEmpty()
{
	if (top == -1)
		return true;
	return false;
}

template <class type>
bool stack<type>::isFull()
{
	if (top == cap)
		return true;
	return false;
}


