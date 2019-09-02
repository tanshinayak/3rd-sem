//hamming code 
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
bool evenMate(int[] m, int r_value, int length);
int main()
{
	string a;
	getline(cin,a);
	int m = a.length();
	int r = 0;
	while(pow(2,r)<m+r+1)
	{
		r++;
	}
	int re[r];
	for(int i=0; i<r; i++)
	{
		re[i] = pow(2,i)-1;
	}
	int ma[m+r];
	for(int i = 0, j= 0, k=0; i<m+r; i++)
	{
		if( i == re[j])
		{
			ma[m+r-i-1] = 0;
			j++;
		} 
		else
		{
			ma[m+r-i-1] = a[m-k-1]-48;
			k++;
		}
	}
	for(int i=0; i<m+r; i++)
	{
		cout<<ma[i];
	}
	//put m and r in array
	// for each of r1-4
	//check the ith bit for all elements 1
	// store the result in a no
	// no is even, make r = 0 else make r 1;
	
	getch();
	return 0;
}

bool evenMate(int[] m, int r_value, int length)
{
	int even = 0;
	for(int i=0; i<length; i++)
	{
		if(m[i] == 1)
	}
}
