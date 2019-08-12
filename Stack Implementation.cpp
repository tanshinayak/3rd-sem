#include <iostream>
#include <conio.h>
#include "Stack.cpp"
using namespace std;

template <class TYPE>
void menu(stack<TYPE> &s)
{
	TYPE x;
	char ch;
	cout<<"Select stack operation"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Top Element"<<endl;
	cout<<"4.Check full"<<endl;
	cout<<"5.Check empty"<<endl;
	cout<<"6.Rebuild stack"<<endl;
	cout<<"7.Display Options"<<endl;
	do 
	{
		switch (getch()-48)
		{
			case 1:
			{
				if (s.isfull())
				{
					cout<<"Stack is full."<<endl;
				}
				else
				{
					cout<<"Push: ";			
						cin>>x;
						s.push(x);
				}
				break;
			}
			case 2:
			{
				if(s.isempty())
				{
					cout<<"Stack is empty."<<endl;
				}
				else
				{
					
					cout<<"Popped: "<<s.pop()<<endl;
				}
				break;
			}
			case 3:
			{
				if(s.isempty())
				{
					cout<<"Stack is empty."<<endl;
				}
				else
				{
					cout<<"Top Element: "<<s.seek()<<endl;
				}
				break;
			}
			case 4:
			{
				if(s.isfull())
				cout<<"Stack is full."<<endl;
				else
				cout<<"Stack is not full."<<endl;
				break;
			}
			case 5:
			{
				if(s.isempty())
				cout<<"Stack is empty."<<endl;
				else
				cout<<"Stack is not empty."<<endl;
				break;
			}
			case 6:
			{
				s.input();
				break;
			}
			case 7:
			{
				cout<<"Select stack operation"<<endl;
				cout<<"1.Push"<<endl;
				cout<<"2.Pop"<<endl;
				cout<<"3.Top Element"<<endl;
				cout<<"4.Check full"<<endl;
				cout<<"5.Check empty"<<endl;
				cout<<"6.Rebuild stack"<<endl;
				cout<<"7.Display Options"<<endl;
				
			}
			default:
			{
				cout<<"Invalid option"<<endl;
			}
		}
		cout<<"Enter y to continue else end \r";
		ch=(char)getch();
		cout<<"                                               \r"<<"\b";
	}
	while (ch=='y' or ch=='Y');
}
int main()
{
	
	int l;
	cout<<"Enter integer stack length: ";
	cin>>l;
	stack<int> SI(l);
	cout<<"Enter float stack length: ";
	cin>>l;
	stack<float> SF (l);
	cout<<"Enter character stack length: ";
	cin>>l;
	stack<char> SC(l);
	cout<<"Enter string stack length: ";
	cin>>l;
//	stack <string>SS(l);
		cout<<"Select data type"<<endl;
		cout<<"1.Integer"<<endl;
		cout<<"2.Float"<<endl;
		cout<<"3.Character"<<endl;
		cout<<"4.String"<<endl;
		cout<<"5.Exit"<<endl;
	
	stack <string>SS(l);
	char ch;
	do 
	{
		switch (getch()-48)
		{
			case 1:
			{
				cout<<"Integer Stack"<<endl;
				menu(SI);
				break;
			}
			case 2:
			{
				cout<<"Float Stack"<<endl;
				menu(SF);
				break;
			}
			case 3:
			{
				cout<<"Character Stack"<<endl;
				menu(SC);
				break;
			}
			case 4:
			{
				cout<<"String Stack"<<endl;
				menu(SS);
				break;
			}
			case 5:
			{
				exit(1);
			}
			default:
			{
				cout<<"Invalid Option \r";
				//cout<<"                       \r\b";
			}
		}
	}
	while (true);

}
