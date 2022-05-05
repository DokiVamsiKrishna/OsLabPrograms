#include<stdio.h>
int main()
{
	int wt[30],at[30],bt[30],p=0,n,tot,tat[30],i;
	printf("enter the no of process:");
	scanf("%d",&n);
	//taking inputs of burst time
	for (int i=0;i<n;i++)
	{
		printf("enter the burst time of process:");
		scanf("%d",&bt[i]);
	}
	//sorting the burst time 
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(bt[j]>bt[j+1])
			{
				int temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		wt[0]=0;
		p+=bt[i-1];
		wt[i]=p;
	}
	//waiting time 
	p=0;
	for(int i=0;i<n;i++)
	{
		p+=wt[i];
	}
	//turn around time
	for(int i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		tot+=tat[i];	
	}
	printf("ProcessId\tBurstTime\tWaiting Time\t Turn Around Time\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	printf("average waiting time:%f\n",(float)p/n);
	printf("average turn around time:%f",(float)tot/n);
	return 0;
}
