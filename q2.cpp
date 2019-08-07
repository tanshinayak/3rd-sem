#include<fcntl.h>
#include<sys/stat.h>
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
	char MY_TIME[50];
	struct stat s1;
	int fd;
	if(argc!=2)
	{
		cout<<"Wrong no. of arguments";
	}
	fd=open(argv[1],O_RDONLY);
	fstat(fd,&s1);
	cout<<"Owner uid="<<s1.st_uid<<endl;
	cout<<"Group id="<<s1.st_gid<<endl;
	cout<<"Access Permission="<<s1.st_mode<<endl;
	cout<<"Size="<<s1.st_size<<endl;
	strftime(MY_TIME,sizeof(MY_TIME),"%d.%m.%Y %H:%M:%S",localtime(&s1.st_atime));
	cout<<"Last access time="<<MY_TIME<<endl;
	strftime(MY_TIME,sizeof(MY_TIME),"%d.%m.%Y %H:%M:%S",localtime(&s1.st_mtime));
	cout<<"Last modified time="<<MY_TIME<<endl;
	return 0;
}
