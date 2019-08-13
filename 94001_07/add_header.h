#include<iostream>
using namespace std;
int top=-1;
template<class type>
class Stack
{
//	int top;
	int size;
	type* stck;
	public:
		Stack()
		{
			top=-1;
		}
		~Stack()
		{
			cout<<"Object goes out of scope....\n";
		}
		void size_of_stack()
		{
			//int size;
			cout<<"Enter size of stack : ";
			cin>>size;
			
			stck=new type[size];
		}
		void push(type ele)
		{
			if(top==size-1)
			{
				cout<<"Stack overflow....\n";
			}
			else
			{
				stck[++top]=ele;
			}
		}
		type pop()
		{
			if(top<0)
			{
				cout<<"Stack underflow....\n";
			}
			else
			{
				return stck[top--];
			}
		}
};
