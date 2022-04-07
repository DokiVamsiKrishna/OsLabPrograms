#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	int fd1,n;
	char buff[n];
	printf("Enter text to write in the file:\n");	
	n= read(0, buff, n);
	write(0,buff,n);
	int close (int fd1);
	return 0;
}
