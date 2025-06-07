#include<stdio.h>
void main()
{
  float a=0, b=0;
  float s=0;
  char c;
  printf("calculator start\n");
  for(;;)
  {
    printf("enter the expression (only integers in case of a modulus operation) \n enter 9z9 to exit\n");
    scanf(" %f%c%f",&a,&c,&b);
    if(c=='z')
    {
      printf("EXIT");
      break;
    }
    if(c=='+')
    {
      s=a+b;
      printf("%f\n",s);
    }
    if(c=='-')
    {
      s=a-b;
      printf("%f\n",s);
    }
    if(c=='*')
    {
      s=a*b;
      printf("%f\n",s);
    }
    if(c=='/')
    {
      s=a/b;
      printf("%f\n",s);
    }
    if(c=='%')
    {
      s=(int)a%(int)b;
      printf("%d\n",(int)s);
    }
  }
}
