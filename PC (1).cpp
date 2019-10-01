#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
using namespace std;
class PC
{
	private:
		int front,rear;
		int* buffer;
		int l;
	public:
		int in();
		int out();
		PC();
		PC(int length);
		bool isfull();
		bool isempty();
		int consume();
		void produce(int val);
		
};
int PC::in()
{
	return front;
}
int PC::out()
{
	return rear;
}
PC::PC()
{
	front=-1;
	rear=-1;
	l=1;
	buffer = new int[l];
}
PC::PC(int length)
{
	front=-1;
	rear=-1;
	l=length;
	buffer = new int[l];
}
bool PC::isfull()
{
	if((rear+1)%l==front)
		return true;
	else
		return false;
}
bool PC::isempty()
{
	if (front==-1 and rear==-1)
		return true;
	else
		return false;
}
void PC::produce(int val)
{
	if(front==-1 and rear==-1)
	{
		front=rear=0;
		buffer[rear]=val;
	}
	else
	{
		rear=(rear+1)%l;
		buffer[rear]=val;
	}
}
int PC::consume()
{
	int val=buffer[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%l;
	}
	return val;
}
int main()
{
	int n;
	cout<<"Enter size of buffer: "<<endl;
	cin>>n;
	PC pc(n);
	do
	{
		cout<<"1) Produce 2) Consume 3)Exit"<<endl;
		cout<<pc.in()<<" "<<pc.out()<<endl;
		switch(getch()-48)
		{
			case 1:
			{
				if(!pc.isfull())
				{
					cout<<"Value: "<<endl;
					cin>>n;
					pc.produce(n);
				}
				else
				{
					cout<<"Buffer is full."<<endl;
				}
				
				break;
			}
			case 2:
			{
				if(!pc.isempty())
				{
					n=pc.consume();
					cout<<"Consumed: "<<n<<endl;
				}
				else
				{
					cout<<"Buffer is empty."<<endl;
				}
				break;
			}
			case 3:
			{
				exit(3000);
			}
		}
	}
	while(true);
}

