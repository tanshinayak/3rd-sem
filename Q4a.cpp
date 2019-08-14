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
       else 
       {
        cout<<"process 1  "<<pid<<endl;
        cout<<"process 1   "<<getpid()<<endl;
        }
      return 0;
    }

