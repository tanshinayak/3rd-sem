#include<iostream>
#include<sys/types.h>
#include<unistd.h>

using namespace std;
int main()
{
	execlp("shutdown","shutdown","-h","now",NULL);
}

