#include<stdio.h>
#include<conio.h>
void main()
{
  int n=0, i=0, c=0, p=0;
  printf("enter no of numbers :\n");
  scanf("%d", &n);
  int num[n];
  printf("enter numbers one by one\n");
  for(i=0;i<n;i++)
  {
    scanf("%d", &num[i]);
    if(num[i]>c)
    {
      c=num[i];
      p=i+1;
    }
  }
    printf("The largest number among the following is : %d\nIt is present is positon %d\n", c,p);
}
