#include<stdio.h>
char * chcv(char *s);
void main()
{
  char a[20]="Computer Prog";
  chcv(a+5);
  printf("%s\n",a);
}
char * chcv(char *s)
{
  for(int i=0;i<20;i++)
  {
    if(s[i]=='\0')
    {
      break;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
      s[i]='*';
    }
    else if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90))
    {
      s[i]='!';
    }
  }
}
