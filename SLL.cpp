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
		void insert();		
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
void sll<type>::insert()
{
	
}
int main()
{
	node<int> a(5); 
	getch()l;
	return 0;
}

