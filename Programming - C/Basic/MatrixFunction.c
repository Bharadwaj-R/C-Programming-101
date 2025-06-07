#include<stdio.h>
#include<conio.h>
int n;
void addition(int m1[n][n], int m2[n][n])
{
  int i,j,r[n][n];
  printf("Answer:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      r[i][j]=0;
      r[i][j]=m1[i][j]+m2[i][j];
      printf("%d\t",r[i][j]);
    }
    printf("\n");
  }
}
void subtract(int m1[n][n], int m2[n][n])
{
  int i,j,r[n][n];
  printf("Answer:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      r[i][j]=0;
      r[i][j]=m1[i][j]-m2[i][j];
      printf("%d\t",r[i][j]);
    }
    printf("\n");
  }
}
void multiply(int m1[n][n], int m2[n][n])
{
  int i,j,k,r[n][n];
  printf("Answer:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      r[i][j]=0;
      for(k=0;k<n;k++)
      {
        r[i][j]=r[i][j]+(m1[i][k]*m2[k][j]);
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

}
void main()
{
  int i,j,c,k,s=0;
  printf("enter order of squatre matrices\n");
  scanf("%d",&n);
  int ar1[n][n],ar2[n][n];
  printf("enter the elements of matrix 1 row wise\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&ar1[i][j]);
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
  printf("1\tto add\n2\tto subtract\n3\tto multiply\nenter choice:\t");
  scanf("%d",&c);
  switch(c)
  {
    case 1:
    addition(ar1,ar2);
    break;
    case 2:
    subtract(ar1,ar2);
    break;
    case 3:
    multiply(ar1,ar2);
    default:
    printf("Invalid input");
  }
}
