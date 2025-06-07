#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c;
  float x=0,y=0,d;
  printf("enter the values of a, b, c :\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  d=(b*b)-(4*a*c);
  printf("the value of discriminant is %f\n", d);
  if(d<0)
  {
    printf("The solution is imaginary.\n");
  }
  if(d==0.0)
  {
    printf("The roots are real and equal\n");
    x=(-b)/(2*a);
    printf("the roots are %f, and %f",x,x);
  }
  if(d>0)
  {
    printf("the roots are real and distinct\n");
    x=((-b)+(sqrt(d)))/(2*a);
    y=((-b)-(sqrt(d)))/(2*a);
    printf("The roots are %f and %f",x,y);
  }
}
