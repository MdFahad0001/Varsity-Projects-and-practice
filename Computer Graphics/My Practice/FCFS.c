
#include<stdio.h>

int main()
{
   int n,i,j,bt[50],wt[50],tat[50];
   float avgwt=0,avgtat=0;

   	printf("\nEnter Total Number of Processes(Maximum 50): ");
    scanf("%d",&n);

    printf("\nEnter Process of Burst Time:	\n");
	for(i=0;i<n;i++)

    {
        printf("P[%d]:  ",i+1);
	    scanf("%d",&bt[i]);
    }
    wt[0]=0;


	for(i=1;i<n;i++)
    {
        wt[i]=0;
	for(j=0;j<i;j++)
	     wt[i]= wt[i]+bt[j];
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");


	for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
	avgwt=avgwt+wt[i];
	avgtat= avgtat+tat[i];
	printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);

    }

    avgwt=(float)avgwt/i;
	avgtat=(float)avgtat/i;
	printf("\n\nAverage Waiting Time: %f",avgwt);
	printf("\nAverage Turnaround Time: %f",avgtat);

















return 0;




}
