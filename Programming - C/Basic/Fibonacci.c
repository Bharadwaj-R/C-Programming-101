#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0, b=1, s=0, n, i;
  printf("enter number of terms in fibonacci series\n");
  scanf("%d", &n);
  printf("the fibonacci series is\n0, 1");
  for(i=1;i<=n-2;i++)
  {
    s=a+b;
    a=b;
    b=s;
    printf(", %d", s);
  }
}
