#include<iostream>
#include<conio.h>
#include"stack.cpp"
template <class TYPE>
void menu(Stack<TYPE> stc)
{
	int choice;
	char ch;
	do{
		cout<<"Enter your choice "<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop "<<endl;
		cout<<"3. top element"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{TYPE e;
				cout<<"Enter the element to be push"<<endl;
				cin>>e;
				stc.push(e);
				break;
			}
			case 2:{cout<<stc.pop()<<endl;
				break;
			}
			case 3:{cout<<stc.topel()<<endl;
				break;
			}
		}
		cout<<" If you want to continue: Type y or Y for yes"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}
int main()
{
	int S;
	cout<<"Enter the size of the Stack:"<<endl;
	cin>>S;
	try{
	cout<<"Working with Integer Stack"<<endl;
	Stack <int> st(S);
	menu(st);
	cout<<"Working with Float stack"<<endl;
	Stack <float> st2(S);
	menu(st2);
	}
	catch(...)
	{
		cout<<"Stack Underflow"<<endl;
	}
	getch();
	return 0;
}
