#include<iostream>
using namespace std;
//int first=-1;
//int last=-1;
int in=0;
int out=0;
int size=60;
int arr[59];
void producer(int prod);
int consumer();
void producer(int prod)
{
	
	/*if(first==-1&&last==-1)
	{
		first++;
		last++;
		arr[first]=prod;
	}
	else if(last!=size-1)*/
	if((in+1)%size!=out)
	{
		//arr[++last]=prod;
		arr[in]=prod;
		in=(in+1)%size;
	}
	else
	{
		cout<<"Buffer is full "<<endl;
	}
}
int consumer()
{
	int cons;
	//if(first!=-1&&first<=last)
	if(in!=out)
	{
		cons=arr[out];
		out=(out+1)%size;
		return cons;
	}
	else
	{
		//cout<<"Buffer is Empty"<<endl;
		//return -1;
		int e;
		throw e;
	}
}
int main()
{
	char ch,choice;
	do{
		cout<<"Enter your choice "<<endl;
		cout<<"1) Produce "<<endl;
		cout<<"2) Consume "<<endl;
		cin>>choice;
		switch(choice)
		{
			case '1':{
				cout<<"Enter the product "<<endl;
				int p;
				cin>>p;
				producer(p);
				break;
				}
			case '2':{
				try
				{
					int con=consumer();
					cout<<"The product : "<<con<<" is consumed "<<endl;
				}
				catch(...)
				{
					cout<<"Buffer empty "<<endl;
				}
				break;
				}
			default:cout<<"wrong choice "<<endl;
		}
		cout<<"Do you want to continue : 'y' or 'Y' for yes ."<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='y');
	return 0;
}
