#include<stdio.h>
void main()
{
  int i,j,n,r,s=0;
  printf("Enter the number:\n");
  scanf("%d",&n);
  while(1)
  {
    while(n!=0)
    {
      r=n%10;
      s=s+r;
      n=n/10;
    }
    if(s<10)
    {
      printf("%d",s);
      break;
    }
    else
    {
      n=s;
      s=0;
    }
  }
}
