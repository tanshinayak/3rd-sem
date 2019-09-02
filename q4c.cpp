#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main()
{
	cout<<"In calling pogram\n";
	execlp("./Q4b","Q4b",NULL);
	cout<<"Never finished!\n";
}

