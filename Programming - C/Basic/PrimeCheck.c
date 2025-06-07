#include<stdio.h>
#include<conio.h>//declaring header files
void main()
{
  int n=0, f=0, i;//n for input value, f for the number of factors, and i is the iterator
  printf("input a number : \n");
  scanf("%d", &n);//inputing the value
  for(i=1;i<=n;i++)//using the for loop to calculate number of factors
  {
    if(n%i==0) //if the number is divisible by i, then i is a factor.
    {
      f=f+1; //increasing the no of factors by 1 for each factor
    }
  }
  if(f==2) //comparing the factors with 2
  {
    printf("the given number is a prime number");

  }
  else
  {
    printf("the given number is not a prime number");
  }
}
