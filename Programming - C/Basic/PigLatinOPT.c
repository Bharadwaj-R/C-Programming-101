#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  int i,j,l,vpos;
  char str[30],lat[30];
  printf("enter a string (only a word is accepted) : ");
  scanf("%s",&str);
  l=strlen(str);
  if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u')
  {
    printf("\n\npig latin form is :\n%syay\n\n",str);
    exit(0);
  }
  for(i=0;i<l;i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='u'||str[i]=='i'||str[i]=='o')
    {
      vpos=i;
      break;
    }
  }
  for(i=0;i<l-vpos;i++)
  {
    lat[i]=str[i+vpos];
  }
  for(i=l-vpos;i<l;i++)
  {
    lat[i]=str[i-(l-vpos)];
  }
  printf("\n\nPig latin form is :\n%say\n\n",lat);
}
