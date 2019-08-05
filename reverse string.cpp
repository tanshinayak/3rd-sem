#include <iostream>
#include <conio.h>
using namespace std;
string rev(string str);
int main()
{
	string str;
	getline(cin,str);
	cout<<rev(str);
	getch();
	return 0;
}
string rev(string s)
{
	if(s.length()<2)
		return s;
	return s[s.length()-1] + rev(s.substr(1,s.length()-2)) + s[0];
}
