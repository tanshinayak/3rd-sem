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
      cout<<"Error no process "<<endl;
      }
       else if(pid==0)
        {
         cout<<"child process       :"<<getppid()<<" "<<pid<<" "<<getpid()<<endl;
 		return 0;
         }
         else
         {
           cout<<"parent process    :"<<getppid()<<" "<<pid<<" "<<getpid()<<endl;
     return 0;
   }
}
