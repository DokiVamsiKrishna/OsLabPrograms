#include<stdio.h>
#include<stdlib.h>
void main()
 {
   int size,n,d[100],i,j,temp,seektime=0,head,max,dir,start;
     printf("enter the starting size of the disk\n");
     scanf("%d",&start);
     printf("enter the ending size of the disks\n");
     scanf("%d",&size);
     printf("enter the number of disks\n");
     scanf("%d",&n);
     printf("enter the head position\n");
     scanf("%d",&head);
     printf("enter the direction right=1 left=0\n");
     scanf("%d",&dir);
     printf("enter disk\n");
     for(i=0;i<n;i++)
     {
     	scanf("%d",&d[i]);
     }
     if(dir==1)
     {
   //bubble sort
     	for(i=0;i<n;i++)
  	{
    		for(j=i+1;j<n;j++)
     		{
     			if(d[i]>d[j])
      			{
       			temp=d[i];
       			d[i]=d[j];
       			d[j]=temp;
      			}
    		}
  	}
  	max=d[n];
  	seektime=(size-head)+(size-d[0]);
  	printf("\nthe seektime is %d\n",seektime);  
     }
     else if(dir==0)
     {
     	for(i=0;i<n;i++)
  	{
    		for(j=i+1;j<n;j++)
     		{
      			if(d[i]>d[j])
      			{
       			temp=d[i];
       			d[i]=d[j];
       			d[j]=temp;
      			}
    		}
  	}
  	max=d[n-1];
  	seektime=(head-start)+(max-start);
  	printf("\nthe seektime is %d\n",seektime);  
     }
 }   
