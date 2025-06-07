#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int ndays,start,i,j,day=1,k=0;
  printf("enter the number of days in the calender :\n");
  scanf("%d",&ndays);
  if(ndays<=31&&ndays>=28)
  {
    printf("enter the first day (1 for monday and continues to 7 for sunday):\n");
    scanf("%d",&start);
  }
  else
  {
    printf("invalid entry");
    exit(0);
  }
  printf("\n\n\n");
  printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
  for(i=1;i<=7;i++)
  {
    if(i==start)
    {
      for(j=1;j<=10;j++)
      {
        k=(j==1)?start:1;
        for(;k<=7;k++)
        {
          printf("%3d\t",day);
          day++;
          if(day>ndays)
          {
            printf("\n\n\n");
            exit(0);
          }
        }
        printf("\n");
      }
    }
    else
    {
      printf("   \t");
    }
  }
}
