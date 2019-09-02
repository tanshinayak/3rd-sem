#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include <sys/wait.h>
using namespace std;
 int main()
 {
   pid_t pid;
   pid=fork();
   int a = wait(NULL);
    if(pid<0)
     {
      cout<<"Error no process "<<endl;
      }
       else if(pid==0)
        {
         cout<<"child process       :"<<getppid()<<" "<<pid<<" "<<getpid()<<" "<<a<<endl;
         }
         else
           cout<<"parent process    :"<<getppid()<<" "<<pid<<" "<<getpid()<<" "<<a<<endl;
     return 0;
   }
