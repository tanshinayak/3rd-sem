#include <iostream>
#include <conio.h>
using namespace std;
bool isFull(int p, int c);
bool isEmpty(int p, int c);
int n = 5;
int main(){
	int ar[n] = {0};
	int p=-1;
	int c=-1;
	char ch = '0';
	while(true)
	{
		cout<<"IM IN UR LOOPY: "<<endl;
		cin>>ch;
		if(ch=='1')
		{
			cout<<"IN YA PRODUCER!\n";
			//Produce
			if(!isFull(p,c))
			{
				p = p%n;
				cout<<"Enter Value: ";
				cin>>ar[p];
				p++;	
			}
			else
			{
				cout<<"It's full AF!\n";
			}
		}
		
		if(ch=='2')
		{
			//Consume
			if(!isEmpty(p,c))
			{
				cout<<"Giving out: ";
				c = ++c%n;
				cout<<ar[c]<<endl;;	
			}		
			else{
				cout<<"It's starving !\n";
			}
		}
	}
	getch();
	return 0;
}
bool isFull(int p, int c)
{
	if((p+1)%n==c)
		return true;
	return false;
}
bool isEmpty(int p, int c)
{
	if(p==c)
		return true;
	return false;
}
//dijkastra's algorithm
