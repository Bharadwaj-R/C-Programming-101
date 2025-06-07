#include<stdio.h>
void main()
{
  int count=0,sum=0,input;
  double average;
  printf("enter the numbers:\n");
  while(1)
  {
    scanf("%d",&input);
    if(input<0)
    {
      break;
    }
    sum=sum+input;
    count++;
  }
  average=(double)sum/count;
  printf("%lf",average);
}
