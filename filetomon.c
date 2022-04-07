#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	int fd1,n;
	char buff[50];
	fd1=open("filetomon.c",O_CREAT | O_RDWR,0777);
	n=read(fd1,buff,n);
	write(0,buff,n);
	int close (int fd1);
	return 0;
}
