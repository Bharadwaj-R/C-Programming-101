#include<stdio.h>
int a=0,b=1,c=0;
void fact(int n)
{
  if(n<1)
  {
    return;
  }
  c=a+b;
  printf(",%d",c);
  a=b;
  b=c;
  fact(n-1);
}
void main()
{
  int n;
  printf("enter number of terms in fibonacci series: \n");
  scanf("%d",&n);
  printf("0,1");
  fact(n-2);
}
