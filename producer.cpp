#include <iostream>
#include <conio.h>
using namespace std;
int n = 5;
int main(){
	int ar[n] = {0}*n;
	int p=0;
	int c=-1;
	char c = '0';
	while(True)
	{
		cin>>c;
		if(c=='1')
		{
			//Produce
			if(!isFull(p,c))
			{
				p = p%n;
				cout<<"Enter Value: ";
				cin>>ar[p];
				p++;	
			}
		}
		
		if(c=='2')
		{
			//Consume
			if(!isEmpty(p,c))
			{
				c = ++c%n;
				cout<<ar[c];	
			}		
		}
	}
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
void produce(int* p)
{

}
int consume()
{
	
}
//dijkastra's algorithm
