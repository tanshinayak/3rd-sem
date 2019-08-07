#include<iostream>
#include<stdio.h>
#include<sys/vfs.h>
#include<sys/sysinfo.h>
#include<sys/utsname.h>
using namespace std;
int main()
{
	int r,q,p,MB,GB;
	struct sysinfo sys1;
	struct utsname uts1;
	struct statfs stat1;
	r=sysinfo(&sys1);
	q=uname(&uts1);
	p=statfs("./",&stat1);
	MB=(1024*1024);
	GB=(MB*1024);
	if(r==0 and q==0 and p==0)
	{
		printf("\nSystem Name:%s",uts1.sysname);
		printf("\nVersion:%s",uts1.version);
		printf("\nRelease:%s",uts1.release);
		printf("\nMachine:%s",uts1.machine);
		printf("\nTotal RAM:%ld MB",(sys1.totalram/MB));
		printf("\nFree RAM:%ld MB",(sys1.freeram/MB));
		printf("\nUsed RAM:%ld MB",(sys1.totalram-sys1.freeram)/MB);
		printf("\nTotal Size of partition:%ld GB",(stat1.f_bsize*stat1.f_blocks)/GB);
	}
	else
	printf("ERROR\n");
}
