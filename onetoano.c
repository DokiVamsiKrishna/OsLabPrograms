#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	int fd1,fd2,n;
	char buff[n];
	fd1=open("onetoano.c",O_CREAT | O_RDWR,0777);
	n=read(fd1,buff,n);
	fd2=open("onetoano.txt",O_CREAT | O_RDWR,0777);
	write(fd2,buff,n);
	int close (int fd2);
	return 0;
}
