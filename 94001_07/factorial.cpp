#include<iostream>
#include<conio.h>
using namespace std;
class Fact
{
	public:
		int n;
	//	void input();
		int facto(int);
};
/*void Fact::input()
{
	cout<<"Enter the no. ";
	cin>>n;
}*/
int Fact::facto(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else if(num<0)
	{
		return -1;
	}else
	{
		return num*facto(num-1);
	}
}
int main()
{
	Fact f;
	//f.input();
	cout<<"Enter a no ";
	cin>>f.n;
	int fac=f.facto(f.n);
	if(fac==-1)
	{
		cout<<"Factorial not possible"<<endl;
	}else
	{
		cout<<"factorial is "<<fac;
	}
	getch();
	return 0;
}
