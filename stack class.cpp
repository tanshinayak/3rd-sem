#include <iostream>
#include <conio.h>
#include "mistack.cpp"
using namespace std;

int main()
{
	int n;
	cout<<"Enter size (Don't be greedy!):";
	cin>>n;
	stack<int> s(n);
	cout<<"One for peek\nTwo for Pop\nThree for Push\nFour for Exit\n";
	while(true)
	{
		switch(getch()-48)
		{
			case 1:
				try{
				s.peek();
				}
				catch(...)
				{
					cout<<"Empty! Can't peek...' \n";
				}
				break;
			case 2:
				try{
				cout<<"Popped: "<<s.pop()<<endl;
				}
				catch(...)
				{
					cout<<"Empty! It's empty \n";
				}
			
				break;
				
			case 3:
				cout<<"Enter no. : ";
				cin>>n;
				s.push(n);
				break;
			case 4:
				break;
			default:
				cout<<"Try again!\n";
		}
	}
	return 0;
}










