#include<stdio.h>
#include<conio.h>
void main()
{
  int num[5],i,j,temp;
  printf("enter the numners one by one:\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&num[i]);
  }
  for(i=0;i<5;i++)
  {
    for(j=i;j<5;j++)
    {
      if(num[i]<num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }
  printf("second largest number is : %d",num[1]);
}
