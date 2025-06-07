#include<stdio.h>
#include<math.h>
void main()
{
  double num,guess,sq;
  int check=1;
  printf("enter a number : \n");
  scanf("%lf",&num);
  printf("enter the guess for square root : \n");
  scanf("%lf",&guess);
  do
  {
    guess=(guess+num/guess)/2;
    sq=pow(guess,2);
    printf("new guess = %lf\tsquare of the guess = %lf\n",guess,sq);
    printf("are you satisfied\n1 for satisfied\n0 for not satisfied\nenter your choice\n");
    scanf("%d",&check);
  }while(check==0);
}
