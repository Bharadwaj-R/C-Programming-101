#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void redirect();

struct node
{
  int data;
  struct node *next;
};

struct node *top = NULL;
struct node *temp = NULL;
int ele = 0;

void print()
{
  temp=top;
  printf("\nThe Elements of the Stack are :\n");
  while(temp != NULL)
  {
    printf("%d\n",temp->data);
    temp = temp->next;
  }
}

void pop()
{
  if(top==NULL)
  {
    printf("\nThe Stack is empty, try pushing an Element");
  }
  else
  {
    temp = top->next;
    free(top);
    top = temp;
  }
  printf("\n");
  redirect();
}

void push(int ele)
{
  struct node *new = malloc(sizeof(struct node));
  new->data = ele;
  new->next = top;
  top=new;
  redirect();
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
    print();
    exit(0);

    default:
    printf("\nInvalid choice, Try again!!\n");
    redirect();
  }
}

void redirect()
{
  int ch;
  printf("1. Push\n2. Pop\n3. Print Stack and End\nEnter choice : ");
  scanf("%d",&ch);
  choice(ch);
}

void main()
{
    redirect();
}
