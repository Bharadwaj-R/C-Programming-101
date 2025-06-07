#include<stdio.h>
int g=1,min,i=1;
void gcd(int x, int y)
{
  if(i>min)
  {
    return;
  }
  if(x%i==0&&y%i==0)
  {
    g=i;
  }
  i++;
  gcd(x,y);
}
void main()
{
  int a,b;
  printf("Enter the values :\n");
  scanf("%d",&a);
  scanf("%d",&b);
  min=a>b?a:b;
  gcd(a,b);
  printf("The HCF(GCD) of %d and %d is %d",a,b,g);
}
