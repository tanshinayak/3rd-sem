#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
 int main()
 {
   pid_t pid;
   pid=fork();
    if(pid<0)
     {
      {
      cout<<"Error no process "<<endl;
      }
       else if(pid==0)
        {
         cout<<"child process"<<getpid()<<endl;
         }
         else
           cout<<"parent process"<<getpid()<<endl;
     return 0;
   }
