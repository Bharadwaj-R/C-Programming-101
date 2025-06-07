#include<stdio.h>
#include<string.h>
int i,n;
struct Reg
{
  char model[20];
  char colour[20];
  int axles;
  char usage[20];
  unsigned long ltdate;
  unsigned long regdate;
  char regnum[11];
};
void retest(struct Reg vehicle[n])
{
  int check;
  for(i=0;i<n;i++)
  {
    if(vehicle[i].usage[0]=='p'&&vehicle[i].usage[1]=='r')
    {
      check=vehicle[i].regdate/10000;
      check=2021-check;
      if(check>15)
      {
        printf("retest the vehicle %d for every 5 years.\n",i+1);
      }
      else
      {
        printf("retest for vehicle %d not required now.\n",i+1);
      }
    }
    else
    {
      check=vehicle[i].regdate/10000;
      check=2021-check;
      if(check>15)
      {
        printf("retet the vehicle %d every year.\n",i+1);
      }
      else
      {
        printf("retest for vehicle %d not required now.\n",i+1);
      }
    }
  }
}
void checkVehicle(struct Reg vehicle[n])
{
  int c,w;
  printf("enter list type \nvehicle type (taxi) -1\nprivate or commercial -2\n");
  scanf("%d",&c);
  printf("\n\n");
  switch(c)
  {
    case 1:
    for(i=0;i<n;i++)
    {
      if(vehicle[i].model[0]=='t'&&vehicle[i].model[1]=='a')
      {
        printf("%d)\t%s\t%s\t%s\n",i+1,vehicle[i].regnum,vehicle[i].model,vehicle[i].colour);
      }
    }
    break;
    case 2:
    for(i=0;i<n;i++)
    {
      if(vehicle[i].usage[0]=='p')
      {
        printf("%d)\t%s\t%s\t%s\n",i+1,vehicle[i].regnum,vehicle[i].model,vehicle[i].colour);
      }
      else
      {
        printf("%d)\t%s\t%s\t%s\n",i+1,vehicle[i].regnum,vehicle[i].model,vehicle[i].colour);
      }
    }
    break;
    default:
    printf("invalid input");
  }
}
void search(struct Reg vehicle[n])
{
  char check[11];
  int j,ch=1;
  printf("enter the registration number to check:\n");
  scanf("%s",check);
  for(i=0;i<n;i++)
  {
    for(j=0;j<11;j++)
    {
      if(check[j]!=vehicle[i].regnum[j])
      {
        ch=0;
        break;
      }
    }
    if(ch==1)
    {
      printf("details\n");
      printf("vehicle type:%s\n",vehicle[i].model);
      printf("colour:%s\n",vehicle[i].colour);
      printf("no. of axles:%d\n",vehicle[i].axles);
      printf("usage:%s\n",vehicle[i].usage);
      printf("last test date(ddmmyyyy format):%lu\n",vehicle[i].ltdate);
      printf("date of registration (ddmmyyyy format):%lu\n\n",vehicle[i].regdate);
    }
  }
}
void main()
{
  int choice;
  printf("enter the number of vehicles:\n");
  scanf("%d",&n);
  struct Reg vehicle[n];
  for(i=0;i<n;i++)
  {
    printf("details of vehicle %d\n",i+1);
    printf("enter vehicle type:");
    scanf("%s",vehicle[i].model);
    printf("enter colour:");
    scanf("%s",vehicle[i].colour);
    printf("enter no. of axles:");
    scanf("%d",&vehicle[i].axles);
    printf("enter usage(private or commercial):");
    scanf("%s",vehicle[i].usage);
    printf("enter last test date(yyyymmdd format):");
    scanf("%lu",&vehicle[i].ltdate);
    printf("enter date of registration (yyyymmdd format):");
    scanf("%lu",&vehicle[i].regdate);
    printf("enter registration number:");
    scanf("%s",vehicle[i].regnum);
    printf("\n\n");
  }
  printf("enter\n1\tfor finding the retest dates\n2\tfor finding taxi details\n3\tfor searching details based on Reg num\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    retest(vehicle);
    break;

    case 2:
    checkVehicle(vehicle);
    break;

    case 3:
    search(vehicle);
    break;

    default:
    printf("invalid input");
  }
}
