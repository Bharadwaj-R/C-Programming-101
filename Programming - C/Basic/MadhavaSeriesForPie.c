#include<stdio.h>
#include<math.h>
void main()
{
  int n,i=0;
  double sum=0;
  printf("enter the number of terms to calculate:\n");
  scanf("%d",&n);
  do
  {
    sum+=(1.0/(2*i+1))*pow(-1,i);
    i++;
  }while(i<n);
  printf("value of pie for %d digits is %lf",n,4*sum);
}
