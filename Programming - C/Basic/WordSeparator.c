#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void platin(char word[20])
{

}
void main()
{
  char ar[20][20],lat[20];
  int i,j=0,n=0,l=0,k,z;

  printf("Enter the sentence to convert into words:\n");
  for(i=0;i<20;i++)
  {
    for(j=0;j<20;j++)
    {
      ar[i][j]='\0';
    }
  }
  j=0;
  for(i=0;i<20;i++)
  {
    scanf("%c",&ar[j][i]);
    if(ar[j][i]==' ')
    {
      ar[j][i]='\0';
      j++;
      i=0;
    }
    if(ar[j][i]=='\n')
    {
      ar[j][i]=='\0';
      break;
    }
  }
  n=j+1;
  j=0;
  for(i=0;j<n;i++)
  {
    if(ar[j][i]=='\0')
    {
      ++j;
      i=0;
      printf("\n");
    }
    printf("%c",ar[j][i]);
  }
}
