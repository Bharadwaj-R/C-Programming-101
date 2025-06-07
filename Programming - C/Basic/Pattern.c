#include<stdio.h>
#include<conio.h>
void main()
{
  int i,k,j,n=0,s=1;
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      printf(" %d",k);
    }
    printf("\n");
  }
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      printf(" %d",i);
    }
    printf("\n");
  }
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      printf(" %d",s);
      s++;
    }
    printf("\n");
  }
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      printf(" *");
    }
    printf("\n");
  }
}
