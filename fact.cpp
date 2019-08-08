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
		long double calculate();
};

long double fact::calculate()
{
	unsigned long long ans = 1;
	for(int i=n; i>0; i --)
	{
		ans *=i;
	}
	return ans;
}
 
int main()
{
	int n;
	while (true){
		cin>>n;
		fact a(n);
		cout<<a.calculate()<<endl;
		getch();
	}
	return 0;
}
