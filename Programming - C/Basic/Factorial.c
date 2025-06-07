#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,f=1;
  printf("enter the number to find factorial\t");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("the factorial of %d is %d",n,f);
}
