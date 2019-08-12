#include <iostream>
#include <conio.h>
#include "mistack.h"
using namespace std;

int main()
{
	string num1;
	string num2;
	getline(cin,num1);
	getline(cin,num2);
	stack<char> s1(num1.length());
	stack<char> s2(num2.length());
	stack<char> ans(s1.length()>s2.length()? s1.length()+1:s2.length()+1);
	char carry = '0'-48;
	for(int i=0; i<num1.length(); i++)
		s1.push(num1[i]);
	for(int i=0; i<num2.length(); i++)
		s2.push(num2[i]);	
	
	while(!s1.isEmpty() && !s2.isEmpty())
	{
		
	}
	getch();
	return 0;
	
}












