#include<iostream>
using namespace std;
int top=-1;
int size=20;
int ar[20];
void producer(int prod)
{
	if(top!=(size-1))
	{
		ar[++top]=prod;
	}else
	{
		cout<<"Buffer is Full"<<endl;
	}
}
int consumer()
{
	if(top!=-1)
	{
		return ar[top--];
	}else
	{
		return -999;
	}
}
int main()
{
	int choice,cont,pr;
	do{
		cout<<"If tou want to Produce press 1 "<<endl;
		cout<<"If you want to consume press 2 "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{cout<<"enter data ";
			cin>>pr;
			producer(pr);
				break;
			}
			case 2:{int consumed=consumer();
				if(consumed!=(-999))
				{
					cout<<"Data consumed is : "<<consumed<<endl;
				}else
					cout<<"Buffer is empty"<<endl;
				break;
			}
			default:cout<<"Wrong choice "<<endl;
		}
		cout<<"Press 1 if you want to continue ";
		cin>>cont;
	}while(cont==1);
	return 0;
}
