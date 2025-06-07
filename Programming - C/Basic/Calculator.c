#include<stdio.h>
#include<conio.h>
float add(float x, float y)
{
  return(x+y);
}
float sub(float x, float y)
{
  return(x-y);
}
double pro(double x, double y)
{
  return(x*y);
}
float div(float x, float y)
{
  return(x/y);
}
int mod(int x, int y)
{
  return(x%y);
}
void main()
{
  float a=0, b=0;
  float e=0;
  char z='0';
  printf("enter the values to calculate\n");
  scanf("%f", &a);
  scanf("%f", &b);
  printf("a for add\ns for sub\nm for multi\nd for div\nr for mod - interers only\n enter value\n");
  z=getche();
  switch (z)
  {
  case 'a':
  {
    printf("the sum is %f", add(a,b));
    break;
  }
  case 's':
  {
    printf("the difference is %f", sub(a,b));
    break;
  }
  case 'm':
  {
    printf("the product is %f", (float)pro(a,b));
    break;
  }
  case 'd':
  {
    printf("the answer is %f", div(a,b));
    break;
  }
   case 'r':
  {
    printf("the remainder is %d", mod((int)a, (int)b));
    break;
  }
  default :
  {
    printf(" invalid input");
  }
  }
}
