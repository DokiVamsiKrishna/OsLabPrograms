#include <stdio.h>
int main()
{
	int bt[20],wt[20],tat[20],pri[20],i,n,tot=0,p=0;
	printf("enter the no of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the burst time:");
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the priority of process:");
		scanf("%d",&pri[i]);
	}
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if (pri[j]>pri[j+1])
			{
				//for sorting burst times
				int temp=bt[j+1];
				bt[j+1]=bt[j];
				bt[j]=temp;
				//for sorting priorities according to burst time
				int temp2=pri[j+1];
				pri[j+1]=pri[j];
				pri[j]=temp2;
			}
		}
	}
		for(int i=1;i<n;i++)
		{
			wt[0]=0;
			p+=bt[i-1];
			wt[i]=p;
		}
		p=0;
		for(int i=0;i<n;i++)
			{
				p+=wt[i];
			}
		for(int i=0;i<n;i++)
		{
			tat[i]=bt[i]+wt[i];
			tot+=tat[i];	
		}
		printf("ProcessId\tBurstTime\tpriority\tWaiting Time\t Turn Around Time\n");
		for(int i=0;i<n;i++)
			{
				printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],pri[i],wt[i],tat[i]);
			}
			printf("average waiting time:%f\n",(float)p/n);
			printf("average turn around time:%f\n",(float)tot/n);
	return 0;
}     
