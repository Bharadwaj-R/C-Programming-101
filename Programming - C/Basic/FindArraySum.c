#include<stdio.h>
void main()
{
  int n=0,i;
  float sum=0;
  printf(" enter no of elements :\n");
  scanf("%d", &n);
  float num[n];
  printf("enter the numbers one by one\n");
  for(i=0;i<n;i++)
  {
    scanf("%f", &num[i]);
    sum+=num[i];
  }
  printf("The sum of given elements is %f", sum);
}
