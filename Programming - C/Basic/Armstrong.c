#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int n, m, s=0, r=0; //n is the unput value, s is the sum of cubes, r is the remainder.
  int t=0, i=0;
  printf("inpur a number\n");
  scanf("%d", &n);  //inputing the value to n
  m=n; //m used tor comparing the sum and the number
  t=n;
  while(t!=0) //finding no of digits
  {
    t=t/10;
    i++;
  }
  while(n!=0) //using the while loop to run untill the value of n drops to 0
  {
    r=n%10; //getting the last digit of the number
    s=s+pow(r,i); //adding the cube of the remainder
    n=n/10; //removing the last digit of the number
  }
  if(s==m) //comparing the sum with the original number
  {
    printf("the given number is Armstrong number");
  }
  else
  {
    printf("the given number is not Armstrong number");
  }
}
