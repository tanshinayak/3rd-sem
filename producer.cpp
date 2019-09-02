#include <iostream>
#include <conio.h>
using namespace std;
int n = 5;
int main(){
	int ar[n] = {0};
	int p=0;
	int c=-1;
	
	getch();
	return 0;
}
bool isFull(int p, int c)
{
	if(p==c)
		return True;
	return False;
}
bool isEmpty(int p, int c)
{
	c++;
	c = c%n;
	if(p==c)
		return True;
	return False;
}
void produce(int*p)
{
	&p = &p++%n;
	int a;
	cout<<"Enter Value:";
	
}
int consume()
{
	
}
