#include<stdio.h>
long fact(int x)
{
  long f=1;
  if(x==1)
  {
    return(1);
  }
  return(x*fact(x-1));
}
void main()
{
  int n=0;
  long ft;
  printf("enter the number to find factorial:\n ");
  scanf("%d",&n);
  ft=fact(n);
  printf("factrorial of %d is %ld",n,ft);
}
