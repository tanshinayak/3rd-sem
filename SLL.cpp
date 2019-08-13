#include <iostream>
#include <conio.h>
using namespace std;

template <class type>
struct node{
	type info;
	node* next;
	node(type data)
	{
		info = data;
	}
};

template <class type>
class sll{
	public:
		node<type>* head;
		sll();
		void insert(node<type> p);		
		/*
		Insert 
			end
			begin
		deleter
			end 
			beg
		reverse
		print
		*/
		
};


template <class type>
sll<type>::sll()
{
	head = NULL;
}

template <class type>
void sll<type>::insert(node<type>* p)
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

