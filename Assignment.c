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
   printf("\nSorting the processes\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arrivalTime[i]<arrivalTime[j])
      {
        
        temp = burstTime[j];
        burstTime[j] = burstTime[i];
        burstTime [i] = temp;
	temp = process[j];
        process[j] = process[i];
        process[i] = temp;
        temp = arrivalTime[j];
        arrivalTime[j] = arrivalTime[i];
        arrivalTime[i] = temp;
      
      }
    }
  }
  printf("\nNew values are\n");
  printf("\t\t\t( Process | Arrival Time | Burst Time )\n");
  for(i=0;i<n;i++)
  {
    printf("\t\t\t|  P[%0.0lf]|%0.0lf | %0.0lf |\n",process[i],arrivalTime[i],burstTime[i]);
  }
   
/*Arranging the table according to Burst time,
Execution time and Arrival Time
Arrival time <= Execution time
*/
  li k = 1;
  double b_time = 0;
  for(j=0;j<n;j++)
  {
    b_time = b_time + burstTime[j];
    min = burstTime[k];
    for(i=k;i<n;i++)
    {
      if((b_time >= arrivalTime[i])&&(burstTime[i]<min))
      {
        temp = burstTime[k];
        burstTime[k] = burstTime[i];
        burstTime[i] = temp;

        temp = arrivalTime[k];
        arrivalTime[k] = arrivalTime[i];
        arrivalTime[i] = temp;

        temp = process[k];
        process[k] = process[i];
        process[i] = temp;
      }
    }
    k++;
  }
