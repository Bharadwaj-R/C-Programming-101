#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<time.h>
void main()
{
  double start,end,runtime;
  int i,l,j=0;
  char word[20],lat[20];
  printf("enter the word to convert to pig latin (only first word accepted) :\n");
  for(i=0;i<20;i++)
  {
    scanf("%c",&word[i]);
    if(word[i]=='\n'||word[i]==' ')
    {
      word[i]='\0';
      break;            //stupid -> i=6
    }
  }
  start=clock();
  l=i;
  if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
  {

    word[l]='y';      //appleyay\0
    word[l+1]='a';
    word[l+2]='y';
    word[l+3]='\0';
    printf("pig latin form is :\n%s",word);
  }
  else
  {
    for(i=1;i<l;i++)
    {
      if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
      {
        break;
      }
    }
    for(j=0;j<l;j++)
    {
      lat[j]=word[i+j];     //stupid   out - upidst
      }
    for(j=0;j<i;j++)
    {
      lat[l-i+j]=word[j];
    }
    lat[l]='a';
    lat[l+1]='y';
    lat[l+2]='\0';
    printf("pig latin form is :\n");
    for(i=0;lat[i]!='\0';i++)
    {
      printf("%c",lat[i]);
    }
  }
  end=clock();
  runtime=(double)(end-start)/CLOCKS_PER_SEC;
  printf("\n\nRuntime : %lf seconds",runtime);
}
