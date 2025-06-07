#include<stdio.h>
void main()
{
  int n,i,j,s=1,k;
  printf("enter the number of rows :\n");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
  {
    for(k=n;k>=i;k--)
    {
      printf("\t");
    }
    for(j=1;j<=i;j++)
    {
      if(j==1)
      {
        s=1;
        printf("\t%d\t",s);
      }
      else
      {
        s=(s*(i-j+1))/(j-1);
        printf("\t%d\t",s);
      }
    }
    printf("\n");
  }
}
