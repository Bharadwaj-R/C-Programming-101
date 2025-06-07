#include<stdio.h>
void main()
{
  FILE *fp;
  int len=0,lines=1,words=1;
  fp=fopen("D:\\Programming - C\\input.txt","r");
  do
  {
    int c=fgetc(fp);
    if(c==-1)
    {
      break;
    }
    if((char)c=='\n')
    {
      lines++;
      words++;
    }
    if((char)c==' ')
    {
      words++;
    }
    printf("%c",c);
    len++;
  }while(1);
  printf("\n\nnumber of characters are : %d\nnumber of words are : %d\nnumber of lines are : %d\n",len-lines+1,words,lines);
  fclose(fp);
}
