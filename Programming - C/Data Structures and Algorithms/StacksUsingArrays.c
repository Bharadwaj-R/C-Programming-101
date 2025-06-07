#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[10], top=0, ele=0, i;
void choice(int);
void push(int);
void pop();

void redirect()
{
  int ch;
  printf("1. Push\n2. Pop\n3. Print Stack and End\nEnter choice : ");
  scanf("%d",&ch);
  choice(ch);
}
void choice(int ch)
{
  switch(ch)
  {
    case 1:
    printf("\nEnter the element to push : ");
    scanf("%d", &ele);
    push(ele);
    break;

    case 2:
    pop();
    break;

    case 3:
    for(i=top-1;i>=0;i--)
    {
      printf("\n%d",stack[i]);
    }
    exit(0);

    default:
    printf("\nInvalid choice, Try again!!\n");
    redirect();
  }
}
void push(int ele)
{
  if(top<10)
  {
    stack[top]=ele;
    top++;
  }
  else
  {
    printf("\nStack full, try poping element!!\n");
  }
  redirect();
}
void pop()
{
  if(top>0)
  {
    top--;
  }
  else
  {
    printf("\nStack empty, Try to push elements!!\n");
  }
  redirect();
}
void main()
{
  for(i=0;i<10;i++)
  {
    stack[i]=0;
  }
  redirect();
}
