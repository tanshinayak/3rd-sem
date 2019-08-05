#include <iostream>
#include <conio.h>
using namespace std;
float pow(float base, float power);
int main()
{
	float n,m;
	cout<<"Enter a no. and power: ";
	cin>>n;
//	cout<<"Enter power: ";
	cin>>m;
	cout<<"Answer is : "<<pow(n,m);
//	getch();
	return 0;
}
float pow(float b, float p)
{
	if(p == 0)
		return 1;
	if(p<0)
		return pow(b,p+1)/b;
	return b*pow(b, p-1);
}
