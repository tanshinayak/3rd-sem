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
