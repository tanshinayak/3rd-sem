#include<iostream>
#include<sys/types.h>
#include<unistd.h>

using namespace std;
int main()
{
	cout<<"In calling pogram\n";
	execve("sudo","shutdown",NULL);
	cout<<"Never finished!\n";
}

