#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void menu();
class SLL
{
	public:
		int info;
		SLL *next;
		SLL()
		{
			next=NULL;
		}
		SLL(int in)
		{
			next=NULL;
			info=in;
		}
		static void InsertAtEnd(int );
		static void traversal();
		static void InsertAtBeg(int );
		static void DelAtBeg( );
		static void DelAtEnd( );
		static int search(int );
		static void reverse();
		static void concat();
		static void alternate();
};
SLL *head=NULL;
static void InsertAtEnd(int el)
{
	SLL *temp;
	SLL *p;
	temp=new SLL();
	p=new SLL();
	temp->info=el;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
static void traversal()
{
	SLL *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->info<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
static void InsertAtBeg(int el)
{
	SLL *temp;
	SLL *p;
	temp=new SLL();
	p=new SLL();
	temp->info=el;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
static void DelAtEnd()
{
	SLL *temp;
	if(head==NULL)
	{
		cout<<"List is empty "<<endl;
	}
	else if(head->next==NULL)
	{
		delete head;
	}
	else
	{
		temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
	}
}
static void DelAtBeg()
{
	SLL *temp;
	if(head==NULL)
	{
		cout<<"empty Link List "<<endl;
	}
	else
	{
		temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
}
static int search(int item)
{
	SLL *temp;
	int count=1;
	if(head==NULL)
	{
		cout<<"EMPTY LINK LIST "<<endl;
	}
	else 
	{
		temp=head;
		while(temp->info!=item)
		{
			if(temp->next!=NULL)
			{
				temp=temp->next;
				count++;
			}
			else
			{
				temp=temp->next;
				break;
			}
		}
		if(temp==NULL)
		return 0;
		else
		return count;
	}
}
static void alternate()
{
	SLL *temp;
	if(head==NULL)
	{
		cout<<"empty link list "<<endl;
	}
	else
	{
		cout<<"The alternate elements in the list are "<<endl;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->info<<" ";
			if(temp->next==NULL)
			break;
			temp=temp->next->next;
			
		}
		cout<<endl;
	}
	
}
static void reverse()
{
	SLL *temp;
	SLL *prev;
	temp=head;
	prev=temp;
	temp=temp->next;
	prev->next=NULL;
	while(head!=NULL)
	{
		head=temp->next;
		temp->next=prev;
		prev=temp;
		temp=head;
	}
	head=prev;
}
static void concat()
{
	SLL *temp;
	SLL *beg;
	temp=head;
	beg=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
}
void menu()
{
	int choice;
	char ch;
	do
	{
		cout<<"Enter your choice for insertion :"<<endl;
		cout<<"1) Insertion at beginning "<<endl;
		cout<<"2) Insertion at ending "<<endl;
		cout<<"3) Deletion from Beginning "<<endl;
		cout<<"4) Deletion from Ending "<<endl;
		cout<<"5) Print the Alternate elements in the link list "<<endl;
		cout<<"6) Reverse the list "<<endl;
		cout<<"7) Search an element from the list "<<endl;
		cout<<"8) Concatenate lists without operator overloading "<<endl;
		cout<<"9) Concatenate lists with operator overloading "<<endl;
		cout<<"10) Display the link list "<<endl;
		cout<<"11) exit "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{
				cout<<"enter the element to be inserted :"<<endl;
				int x;
				cin>>x;
				InsertAtBeg(x);
				cout<<"The Link List is :"<<endl;
				traversal();
				break;
			}
			case 2:{
				cout<<"Enter the element to be inserted :"<<endl;
				int x;
				cin>>x;
				InsertAtEnd(x);
				cout<<"The link list is :"<<endl;
				traversal();
				break;
			}
			case 3:{
				DelAtBeg();
				cout<<"The list after deletion from beginning is "<<endl;
				traversal();
				break;
			}
			case 4:{
				DelAtEnd();
				cout<<"The list after deletion from ending is "<<endl;
				traversal();
				break;
			}
			case 5:{
				alternate();
				break;
			}
			case 6:{
				reverse();
				cout<<"The Reversed Link List is "<<endl;
				traversal();
				break;
			}
			case 7:{
				cout<<"Enter the element to be searched "<<endl;
				int a;
				cin>>a;
				int x=search(a);
				if(x==0)
				cout<<"element not found "<<endl;
				else
				cout<<"The element "<<a<<" is found at position "<<search(a)<<endl;
				break;
			}
			case 8:{
				
				break;
			}
			case 9:{
				
				break;
			}
			case 10:{
				cout<<"The link list is "<<endl;
				traversal();
				break;
			}
			case 11:{
				cout<<"exiting the program "<<endl;
				exit(1000);
				break;
			}
			default:cout<<"wrong choice"<<endl;
		}
		cout<<"do you want to insert more elements ? 'y' or 'Y' for yes. "<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}
int main()
{
	menu();
	getch();
	return 0;
}

