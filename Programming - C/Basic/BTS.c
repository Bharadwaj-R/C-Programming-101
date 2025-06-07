#include<stdio.h>
void main()
{
  int i,j,k=12,l;
  for(i=1;i<=7;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    for(l=0;l<k;l++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
    k-=2;
  }
  k=0;
  for(i=1;i<=7;i++)
  {
    for(j=7;j>=i;j--)
    {
      printf("*");
    }
    for(l=0;l<k;l++)
    {
      printf(" ");
    }
    for(j=7;j>=i;j--)
    {
      printf("*");
    }
    printf("\n");
    k+=2;
  }
}
