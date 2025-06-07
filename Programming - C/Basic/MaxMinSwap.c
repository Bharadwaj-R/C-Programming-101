#include<stdio.h>
void main()
{
  int i,min,max,p,q;
  int temp=0;
  max=0;
  int num[10];
  printf("enter the numbers one by one");
  for(i=0;i<10;i++)
  {
    scanf("%d",&num[i]);
  }
  min=num[0];
  for(i=0;i<10;i++)
  {
    if(min>=num[i])
    {
      min=num[i];
      p=i;
    }
    if(max<=num[i])
    {
      max=num[i];
      q=i;
    }
  }
  temp = num[p];
  num[p]=num[q];
  num[q]=temp;
  for(i=0;i<10;i++)
  {
    printf("%d\n",num[i]);
  }
}
