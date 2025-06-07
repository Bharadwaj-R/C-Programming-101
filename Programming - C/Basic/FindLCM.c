#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,a,b,f=1,m,l;
  printf("Enter the values :\n");
  scanf("%d",&a);
  scanf("%d",&b);
  m=a>b?a:b;
  for(i=1;i<=m;i++)
  {
    if(a%i==0 && b%i==0)
    {
      f=i;
    }
  }
  l=(a*b)/f;
  printf("The LCM of %d and %d is %d",a,b,l);
}
