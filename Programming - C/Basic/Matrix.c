#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,c,k,s=0;
  printf("enter order of squatre matrices\n");
  scanf("%d",&n);
  int ar1[n][n],ar2[n][n],r[n][n];
  printf("enter the elements of matrix 1 row wise\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&ar1[i][j]);
      r[i][j]=0;
    }
  }
  printf("enter the elements of matrix 2 row wise\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&ar2[i][j]);
    }
  }
  printf("Enter 1 to add and 2 to multiply\n");
  scanf("%d",&c);
  switch(c)
  {
    case 1:
    printf("Answer:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        r[i][j]=ar1[i][j]+ar2[i][j];
        printf("%d\t",r[i][j]);
      }
      printf("\n");
    }
    break;
    case 2:
    printf("Answer:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        for(k=0;k<n;k++)
        {
          r[i][j]=r[i][j]+(ar1[i][k]*ar2[k][j]);
        }
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",r[i][j]);
      }
      printf("\n");
    }
    break;
    default:
    printf("Invalid input");
  }
}
