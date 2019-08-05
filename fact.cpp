#include <iostream>
#include <conio.h>
using namespace std;
 
class fact{
	int n;
	public:
		fact(int a)
		{
			n =a;
		}
		int calculate();
};

fact::calculate()
{
	int ans = 1;
	for(int i=n; i>0; i --)
	{
		ans *=i;
	}
	return ans;
}
 
int main()
{
	fact a(5);
	cout<<a.calculate();
	getch();
	return 0;
}
