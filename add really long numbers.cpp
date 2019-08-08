#include <iostream>
#include <conio.h>
#include "mistack.h"
//#include "reverse.h"
using namespace std;

int main()
{
	string num1;
	string num2;
	getline(cin,num1);
	getline(cin,num2);
//	num1 = rev(num1);
//	num2 = rev(num2);
	stack<char> s1(num1.length());
	stack<char> s2(num2.length());
	
	for(int i=0; i<num1.length(); i++)
		s1.push(num1[i]);
	for(int i=0; i<num2.length(); i++)
		s2.push(num2[i]);	
	
	getch();
	return 0;
	
}












