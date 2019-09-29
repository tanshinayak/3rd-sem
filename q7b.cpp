#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
using namespace std;
int sum[2];
int i=0;
int size=5;
void* runner(void* b);
int main()
{
	
	pthread_t t1,t2;
	int a[size];
	cout<<"Enter the elements in array of size :"<<size<<endl;
	for(int x=0;x<size;x++)
		cin>>a[x];
	for(;i<size/2;i++)
	{
		pthread_create(&t1,NULL,runner,&a[i]);
	}
	for(int j=i;j<size;j++)
	{
		pthread_create(&t2,NULL,runner,&a[j]);
	}
	pthread_join(t2,NULL);
	cout<<"Sum is :"<<sum[0]+sum[1]<<endl;
  	return 0;
}
void* runner(void* b)
{
	int a=*(int*)b;
	if(i<size/2)
		sum[0]+=a;
	else
		sum[1]+=a;
	return &sum;
}
