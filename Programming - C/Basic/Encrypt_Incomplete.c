/*
abcdefghijklmnopqrstuvwxyz
zebrascdefghijklmnopqtuvwx
*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
  int i,j,len,ch=2;
  char a1[27],a2[27],string[50];
  printf("enter the input string:\n");
  for(i=0;i<50;i++)
  {
      string[i]=getc(stdin);
      if(string[i]=='\n')
      {
        string[i]='\0';
        break;
      }
  }
  len=i;
  a1[26]=a2[26]='\0';
  for(i=0;i<26;i++)
  {
    a1[i]=(char)(97+i);
  }
  a2[4]='a';
  a2[2]='b';
  a2[1]='e';
  a2[3]='r';
  a2[5]='s';
  a2[0]='z';
  j=6;
  printf("Enter 1 to encrypt and 2 to decrypt:");
  scanf("%d",&ch);
  for(i=0;i<26;i++)
  {
    if(i==0||i==1||i==4||i==17||i==18||i==25)
    {
      continue;
    }
    else
    {
      a2[j]=97+i;
      j++;
    }
  }
  switch(ch)
  {
    case 1:
    printf("enter case 1");
    for(i=0;i<len;i++)
    {
      for(j=0;j<26;j++)
      {
        if(string[i]==a1[j])
        {
          string[i]=a2[j];
        }
      }
    }
    break;
    case 2:
    printf("enter case 2");
    for(i=0;i<len;i++)
    {
      for(j=0;j<26;j++)
      {
        if(string[i]==a2[j])
        {
          string([i]==a1[j]);
        }
      }
    }
    break;
    default:
    printf("invalid option");
  }
  printf("\n\n");
  for(i=0;i<len;i++)
  {
    printf("%c",string[i]);
  }
}
