#include <iostream>
#include <conio.h>
using namespace std;

template <class type>
struct node{
	type info;
	node* next;

};

template <class type>
class sll{
	public:
		int l;
		node<type>* head =NULL;
		sll();
		~sll();
		void insertIndex(type info, int n=0);		
		void insertStart(type info);
		void insertEnd(type info);
		void delIndex(int n=0);		
		void delStart();
		void delEnd();
		void reverse();
		void display();
		int length();
		//search overload conhcat alternate 
		
		
};


template <class type>
sll<type>::sll()
{
	head = NULL;
	l =0 ;
}

template <class type>
sll<type>::~sll()
{
	cout<<"!!! Destroying the List !!!\n";	
}

template <class type>
void sll<type>::delIndex(int n)
{
	node<type>* temp =head;
	if(n==0)
	{
		head = head->next;
		temp->next = NULL;
		delete temp;
		l--;
		return;
	}
	for(int i = 0; i<n-1; i++)
		temp = temp->next;
	node<type>* temp2 = temp->next;
	temp->next = temp->next->next;
	temp2->next = NULL;
	l--;
	delete temp2;
}

template <class type>
void sll<type>::insertIndex(type info, int n)
{
	node<type>* p = new node<type>;
	p->info = info;
	p->next = NULL; 
	if(n>length())
		n = length();
	if(n==0)
	{
		p->next = head;
		head = p;
		p = NULL;
		delete p;
		l++;
		return;	
	}
	node<type>* temp = head;
	for(int i = 0; i<n-1; i++)
		temp = temp->next;	
	p->next = temp->next;
	temp->next = p;
	l++;
	temp = NULL;
	delete temp;
}

template <class type>
void sll<type>::display()
{
	node<type>* temp =head;
	while(temp != NULL)
	{
		cout<<temp->info;
		temp = temp->next;
	}
}

template <class type>
int sll<type>::length()
{
	return l;
}

template <class type>
void sll<type>::delStart()
{
	delIndex();
}

template <class type>
void sll<type>::delEnd()
{
	delIndex(l);
}

template <class type>
void sll<type>::insertStart(type info)
{
	insertIndex(info);
}

template <class type>
void sll<type>::insertEnd(type info)
{
	insertIndex(info , l);
}
int main()
{

	sll<int> b;
	b.insertIndex(1);
	b.insertIndex(2);
	b.insertIndex(3,1);
	b.insertIndex(7,2);
	b.insertIndex(8,3);
	b.insertStart(9);
	b.insertEnd(9);
	b.display();
//	b.delStart();
//	b.delEnd();
	cout<<b.l<<endl;
	b.insertIndex(4,9);
	//b.delIndex();
	//b.delIndex(3);
	b.display();
	getch();
	return 0;
}

