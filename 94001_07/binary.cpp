#include <iostream>
#include <conio.h>
using namespace std;
string toBin(int a);
int main()
{
	for(int i =0; i<20; i++)
		cout<<toBin(i)<<endl;
	getch();
	return 0;
}
string toBin(int a)
{
	string b="";
	while(a != 0)
	{
		b+=a%2 + 48;
		a=a/2;
	}
	return b;
}
