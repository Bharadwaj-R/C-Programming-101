#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

void redirect();
void choice(int);
struct node *head = NULL;
struct node *temp = NULL;
int ch=0, ele=0;

void print()
{
  temp=head;
  printf("\nThe Elements of the Linked-List are :\n");
  while(temp != NULL)
  {
    printf("%d\n",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void addToList(int ele)
{
  //creation of new node
  struct node *new = malloc(sizeof(struct node*));
  new->data = ele;
  new->next = NULL;
  new->prev = NULL;

  //adding to list
  if(head==NULL)
  {
    head=new;
  }
  else
  {
    temp=head;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new;
    new->prev = temp;
  }
}

void choice(int ch)
{
  switch(ch)
  {
    case 1:
    printf("\nEnter element to add to list : ");
    scanf("%d", &ele);
    printf("\n");
    addToList(ele);
    redirect();
    break;

    case 2:
    print();
    redirect();
    break;

    default:
    printf("\n!! Invalid Option !!\n");
    printf("!! Please enter valid option !!\n\n");
    redirect();
  }
}

void redirect()
{
  printf("1. Add to List\n2. Print List\nEnter your choice : ");
  scanf("%d", &ch);
  choice(ch);
}

void main()
{
    redirect();
}
