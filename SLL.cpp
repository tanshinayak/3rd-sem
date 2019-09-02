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
		node<int>* head;
		sll();
		~sll();
		void insertIndex(node<type>* p, int n=0);		
//		void delIndex(int n);		
//		void delData(type info, int times =1);
		//void reverse();
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
void sll<type>::insertIndex(node<type>* p, int n)
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
void sll<type>::display()
{
	node<type>* temp =head;
	while(temp != NULL)
	{
		cout<<head->info;
		temp = temp->next;
	}
}

template <class type>
int sll<type>::length()
{
	return 5;
}

int main()
{
	node<int> a;
	a.info = 5;
	a.next = NULL; 
	sll<int> b;
	b.insertIndex(&a);
	b.display();
	getch();
	return 0;
}

