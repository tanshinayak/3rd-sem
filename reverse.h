#include <iostream>
#include <conio.h>
using namespace std;
string rev(string s)
{
	if(s.length()<2)
		return s;
	return s[s.length()-1] + rev(s.substr(1,s.length()-2)) + s[0];
}
