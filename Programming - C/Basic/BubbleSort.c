#include<stdio.h>
void main()
{
  int n,i,j,temp;
  printf("enter the no of numbers\n");
  scanf("%d",&n);
  int num[n];
  printf("enter the numbers one by one :\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(num[j]>num[j+1])
      {
        temp=num[j];
        num[j]=num[j+1];
        num[j+1]=temp;
      }
    }
  }
  printf("the rearranged data is :\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",num[i]);
  }
}
