#include<iostream>
#include<conio.h>
using namespace std;
class Power
{
	
	public:
		int a,x;
		void input();
		float powe(int);
};
void Power::input()
{
	cout<<"enter the base "<<endl;
	cin>>a;
	cout<<"enter the power "<<endl;
	cin>>x;
}
float Power::powe(int po)
{
	if(po==0)
	{
		return 1;
	}
	else if(po<0)
	{		
		return (1.0/a)*powe(po+1);
	}
	else
	{
		return a*powe(po-1);
	}
}
int main()
{
	Power p;
	p.input();
	cout<<p.a<<"^"<<p.x<<"="<<p.powe(p.x)<<endl;
	getch();
	return 0;
}
