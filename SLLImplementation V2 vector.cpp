#include<iostream>
#include<conio.h>
#include"SLLSimple.h"
using namespace std;
template <class N>
void menu(SLL<N> &L)
{
	int n;
	char ch;
	N x;
	cout<<"Select SLL operation"<<endl;
	cout<<"1.Insert"<<endl;
	cout<<"2.Reverse SLL"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Delete"<<endl;
	cout<<"5.Search"<<endl;
	cout<<"6.Display alternate elements"<<endl;
	cout<<"7.Display options"<<endl;
	cout<<"8.Add Lists"<<endl;
	do 
	{
		switch (getch()-48)
		{
			case 1:
			{
				cout<<"1=Beginning -1=End Else any position: ";
				cin>>n;
				cout<<"Enter data: ";
				cin>>x;
				L.insert(n,x);
				L.display();
				break;
				L.display();
			}
			case 2:
			{
				L.reverse();
				L.display();
				break;
			}
			case 3:
			{
				L.display();
				break;
			}
			case 4:
			{
				cout<<"1=Beginning -1=End Else any position";
				cin>>n;
				L.del(n);
				L.display();
				break;
			}
			case 5:
			{
				cout<<"1=Beginning -1=End Else any position";
				cin>>n;
				cout<<L.search(n)<<endl;
				break;
			}
			case 6:
			{
				L.displayalt();
				break;
			}
			case 7:
			{
				cout<<"1.Insert"<<endl;
				cout<<"2.Reverse SLL"<<endl;
				cout<<"3.Display"<<endl;
				cout<<"4.Delete"<<endl;
				cout<<"5.Search"<<endl;
				cout<<"6.Display alternate elements"<<endl;
				cout<<"7.Display options"<<endl;
				break;
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
	SLL<int> L[3];
	do 
	{
		switch (getch()-48)
		{
			case 1:
			{
				menu(L[0]);
				break;
			}
			case 2:
			{
				menu(L[1]);
				break;
			}
			case 3:
			{
				L[2]=(L[0]+L[1]);
				L[2].display();
				break;
			}
		
			case 5:
			{
				exit(3000);
			}
		}
	}
	while(true);
	getch();
}
