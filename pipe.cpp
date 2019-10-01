#include<iostream>
#include <stdio.h> 
#include<sys/types.h>
#include <unistd.h>
#include<stdlib.h>
//#include<sys/wait.h>
int p[2];
using namespace std;
int main()
{
	pid_t pid;
	int msize;
	char* msg=new char[msize];
	cout<<"Enter the size of your message "<<endl;
	cin>>msize;
	cout<<"Enter your message string "<<endl;
	for(int i=0;i<msize;i++)
	cin>>msg[i];
	if(pipe(p) < 0) 
        exit(1);
	pid=fork();
	if(pid<0)
	{
		cout<<"child not created "<<endl;
		exit(1);
	}
	else if(pid==0)
	{
		read(p[0],msg,msize);
		cout<<msg<<endl;
	}
	else
	{
		close(p[0]);
		write(p[1],msg,msize);
		wait(NULL); 
	}
	return 0;
}
