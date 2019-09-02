#include <iostream>
#include <conio.h>
using namespace std;

template <class type>
struct node{
	type info;
	node* next = NULL;
	node(type data)
	{
		info = data;
	}
};

template <class type>
class sll{
	public:
		node<void>* head;
		sll();
		~sll();
		void insertIndex(node<type>* p, int n);		
		void delIndex(int n);		
		void delData(type info, int times =1);
		void reverse();
		void display();
		int length();
		/*
		Insert 
			end
			begin
		deleter
			end 
			beg
		reverse
		print
		distructor
		*/
		
};


template <class type>
sll<type>::sll()
{
	head = NULL;
}

template <class type>
sll<type>::~sll()
{
	cout<<"!!! Destroying the List !!!\n";	
}

template <class type>
void sll<type>::insertIndex(node<type>* p, int n=0);
{
	if(n>length())
		return;
	if(n==0)
	{
		p->next = head;
		head = p;
		return;
	}
	node<type>* temp = head;
	for(int i = 0; i<n-1; i++)
		temp = temp->next;	
	p->next = temp->next;
	temp->next = p;
	temp = NULL;
	delete temp;
}

template <class type>
void sll<type>::insertIndex(node<type>* p, int n);
{
	p->next = head;
	head = p;
}

template <class type>
void sll<type>::insertIndex(node<type>* p, int n);
{
	p->next = head;
	head = p;
}

int main()
{
	node<int> a(5); 
	getch();
	return 0;
}

