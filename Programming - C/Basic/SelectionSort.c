#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,temp=0;
  printf("enter the number of numbers:\n");
  scanf("%d",&n);
  int num[n];
  printf("enter the numbers:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  printf("the sorted array is:\n");
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(num[i]>num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",num[i]);
  }
}
