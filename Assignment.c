#include<bits/stdc++.h>
#define long int li;
int main()
{
  printf("\nScheduling Process\n");
  li n,i=0,j=0;
  printf("Enter the number of processes ");
  scanf("%ld",&n ); 
  double priority[n],avg_waiting,avg_turnaround,burstTime[n],arrivalTime[n],waitingTime[n],turnaroundTime[n], process[n], temp, completionTime[n],min,sum=0,sum2=0,wait_final, turnaround_final, wait_avg, turnaround_avg;
  for(i=0;i<n;i++)
  {
    printf("\nEnter Burst time [%d] : ", i+1 );
    scanf("%lf", &burstTime[i]);
    printf("Enter Arrival time [%d] : ", i+1 );
    scanf("%lf", &arrivalTime[i] );
    process[i]=i+1;
  }

 
  printf("\t\t\t( Process | Arrival Time | Burst Time )\n");
  printf("\t\t\t---------------------------------------\n");
  for(i=0;i<n;i++)
  {
    printf("\t\t\t|  P[%0.0lf]| %0.0lf| %0.0lf |\n",process[i],arrivalTime[i],burstTime[i]); //printing the entered values
  }
   
