#include<iostream>
#include<conio.h>
using namespace std;
template <class N>
struct node
{
	N info;
	node *next=NULL;
};
template <class N>
class SLL
{
	private:
		int l;
		node<N>* head=NULL;
	public:
		node<N>* headptr();
		~SLL();
		SLL();
		SLL(SLL &ob);
		bool isempty(); 
		void reverse();
		int length();
		void insert(int val, N info);
		void display();
		void del(int);
		N search(int);
		void displayalt();
		SLL operator+(SLL &L);
		void operator=(SLL &L);
};
template <class N>
node<N>* SLL<N>::headptr()
{
	return head;
}
template <class N>
SLL<N>::~SLL()
{
	cout<<"Linked List Object Destroyed"<<endl;
}
template <class N>
SLL<N>::SLL()
{
	head=NULL;
	l=0;
}
template <class N>
SLL<N>::SLL(SLL &L)
{
	l=L.l;
/*	if(!L.isempty())
	{
		node<N>* NA[l]={NULL};
		node<N>* p;
		p=L.head;
		for(int i=0;i<l;i++,p=p->next)
		{
			NA[i]->info=p->info;
			if(i<l-1)
				NA[i]->next=NA[i+1];
			else
				NA[i]->next=NULL;
		}
		head=NA[0];
	}*/
	if(!L.isempty())
	{
		node<N>* p;
		p=L.headptr();
		for(int i;i<l;i++,p=p->next)
		{
			insert(-1,p->info);
		}
	}
}
template <class N>
int SLL<N>::length()
{
	return l;
}
template <class N>
N SLL<N>::search(int pos)
{
	if(isempty())
		cout<<"List is empty"<<endl;
	else
	{
		N val;
		if(pos==1)
		{
			val=head->info;
			return val;
		}
		else if(pos==-1 or pos>l)
		{
			node<N>* p;
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			val=p->info;
			delete p;
			return val;
		}
		else if(pos<=l)
		{
			N val;
			node<N>* p;
			p=head;
			for(int i=1;i<pos and p->next!=NULL;i++)
			{
				p=p->next;
			}
			val=p->info;
			delete p;
			return val;
		}
	}
}
template <class N>
void SLL<N>::del(int pos)
{
		if(isempty())
		cout<<"List is empty"<<endl;
	else
	{
		if(pos==1)
		{
			node<N>* p;
			p=head;
			head=head->next;
			p->next=NULL;
			p=NULL;
			delete p;
		}
		else if(pos==-1)
		{
			node<N>* p=new node<int>;
			node<N>* t=new node<int>;
			p=head;
			while(p->next!=NULL)
			{
				t=p;
				p=p->next;
			}
			t->next=NULL;
			p=t=NULL;
			delete p;
			delete t;
		}
		else
		{
			node<N>* p=new node<N>;
			node<N>* t=new node<N>;
			p=head;
			for(int i=1;i<pos and p->next!=NULL;i++)
			{
				t=p;
				p=p->next;
			}
			t->next=p->next;
			p->next=NULL;
			p=t=NULL;
			delete p;
			delete t;
		}
	}
}
template <class N>
bool SLL<N>::isempty()
{
	if (head==NULL)
		return true;
	else
		return false;
}
template <class N>
void SLL<N>::reverse()
{
	if(isempty())
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		node<N>* t;
		node<N>* p;
		t=head;
		p=head->next;
		while(head->next!=NULL)
		{
			head->next=p->next;
			p->next=t;
			t=p;
			p=head->next;
		}
		head=t;
	}
}
template <class N>
void SLL<N>::insert(int pos,N inf)
{
	node<N> *n=new node<N>;
	n->info=inf;
	n->next=NULL;
	if(pos==1)
	{
		if(head==NULL)
		{
			head=n;
			l++;
			n=NULL;
			delete n;
		}
		else
		{
			n->next=head;
			head=n;
			n=NULL;
			delete n;
			l++;
		}
	}
	else if(pos==-1 or pos>l)
	{
		if(head==NULL)
		{
			head=n;
			head->next=NULL;
			l++;
			n=NULL;
			delete n;
		}
		else
		{
			node<N>* p;
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=n;
			n->next=NULL;
			p=NULL;
			delete p;
			l++;
		}
	}
	else if(pos<=l)
	{
		node<N>* p;
		p=head;
		for(int i=1;i<pos-1 and p->next!=NULL;i++)
		{
			p=p->next;
		}
		n->next=p->next;
		p->next=n;
		p=NULL;
		delete p;
		l++;
	}
}
template <class N>
void SLL<N> ::display()
{
	node<N>* p=new node<N>;
	p=head;
	while(p!=NULL)
	{
		cout<<"["<<p->info<<"]"<<"->";
		p=p->next;
	}
	cout<<"|"<<endl;
}
template <class N>
void SLL<N> ::displayalt()
{
	node<N>* p=new node<N>;
	p=head;
	do
	{
		cout<<"["<<p->info<<"] ";
		p=p->next->next;
	}
	while(p!=NULL);
	cout<<endl;
}



template <class N>
SLL<N> SLL<N>:: operator+ (SLL<N> &L)
{
	SLL res;
	node<N>* p;
	p=head;
	while(p->next!=NULL)
	{
		res.insert(-1,p->info);
	}
	p=L.head;
	return res;
	
}
template <class N>
void SLL<N>:: operator= (SLL<N> &L)
{
	l=L.length();
	if(!L.isempty())
	{
		node<N>* p;
		p=L.headptr();
		for(int i;i<l;i++,p=p->next)
		{
			insert(-1,p->info);
		}
	}
}
