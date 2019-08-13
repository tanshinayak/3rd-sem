#include<iostream>
#include<conio.h>
using namespace std;
class Reverse
{
	public:
		string s;
		int l;
		void input();
		void reve(int ,int);
};
void Reverse::input()
{
	cout<<"enter the string"<<endl;
	cin>>s;
	l=s.length();
}
void Reverse::reve(int ind,int n)
{
	if(ind!=n/2)
	{
		swap(s[ind],s[n-ind-1]);
		reve(++ind,n);
	}
}
int main()
{
	Reverse re;
	re.input();
	re.reve(0,re.l);
	cout<<"Reversed string is "<<re.s;
	getch();
	return 0;
}
