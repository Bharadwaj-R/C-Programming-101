#include<stdio.h>
#include<conio.h>
float fact(int n)
{
  float f=1;
  int i;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  return(f);
}
void main()
{
  int a;
  float r,sin,cos;
  printf("enter the angle in degree\n");
  scanf("%d", &a);
  r=(3.14*a)/180;
  sin=r-(r*r*r)/fact(3)+(r*r*r*r*r)/fact(5);
  cos=1-(r*r)/fact(2)+(r*r*r*r)/fact(4)-(r*r*r*r*r*r)/fact(6);
  printf("sin(%d)=%.2f\t",a,sin);
  printf("cos(%d)=%.2f",a,cos);
}
