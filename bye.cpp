#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main()
{
	execlp("sudo","sudo","shutdown","-h","now",NULL);
}

