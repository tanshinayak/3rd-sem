#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;

class process{
	public:
	string name;
	int arrival;
	int burst;
	int priority;
//	process(string name,int burst);
//	process(string name,int burst, int arrival);
//	process(string name,int burst, int priority);
	process();
	process(string name,int burst, int arrival, int priority);
	void setName(string name);
	void setArrival(int a);
	void setBurst(int a);
	void setPriority(int a);
};
process::process()
{
	name = "";
	burst = 0;
	arrival = 0;
	priority = 0;
}
process::process(string n,int b, int a, int p)
{
	name = n;
	burst = b;
	arrival = a;
	priority = p;
}
void process::setName(string n)
{
	name = n;
}
void process::setArrival(int a)
{
	arrival = a;
}
void process::setBurst(int a)
{
	burst = a;
}
void process::setPriority(int a)
{
	priority = a;
}
void Swap(process a, process b)
{
	process temp = process();
	temp = b;
	b = a;
	a = temp;
}

void Sort(process* a,int n)
{
	bool flag = false;
	for(int i=0; i<n; i++,flag = false)
	{
		for(int j=0; j<n-i;j++)
		{
			if(a[j+i].burst<a[j].burst)
			{
				flag = true;
				Swap(a[j],a[j+1]);
			}
		}
	}
}


int main()
{
	string s; int a,b,c;
	process* ar =new process[5];
	for(int i=0; i<5; i++)
	{
		getline(cin,s);
		cin>>a;//cin>>b;cin>>c;
		ar[i].setName(s);
		ar[i].setBurst(a);
		cout<<"process "<<s<<" created!\n";
		fflush(stdin);
	} 
	for(int i=0; i<5; i++)
	{
		cout<<"process "<<ar[i].name<<" "<<ar[i].burst<<" "<<ar[i].arrival<<" "<<ar[i].priority<<" "<<" created!\n";
	}
	
	getch();
	return 0;
}
