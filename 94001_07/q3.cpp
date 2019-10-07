#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
string reverse(string,int,int);
int main()
{
	cout<<"enter the string"<<endl;
	string s;
	cin>>s;
	string rev=reverse(s,0,s.length()-1);
	cout<<"The reverse of the string is "<<rev<<endl;
	getch();
	return 0;
}
string reverse(string a,int i,int j)
{
	if(i>j||i==j)
	{
		return a;
	}
	else 
	{
		char c=a[i];
		a[i]=a[j];
		a[j]=c;
		return reverse(a,i+1,j-1);
	}
}
