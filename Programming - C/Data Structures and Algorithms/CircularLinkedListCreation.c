#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
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
  do
  {
    printf("%d\n",temp->data);
    temp = temp->next;
  }while(temp != head);
  printf("\n");
}

void addToList(int ele)
{
  //creation of new node
  struct node *new = malloc(sizeof(struct node*));
  new->data = ele;
  new->next = NULL;
  //adding to list
  if(head==NULL)
  {
    head=new;
    new->next = head;
  }
  else
  {
    temp=head;
    while(temp->next != head)
    {
      temp = temp->next;
    }
    temp->next = new;
    new->next = head;
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

    case 3:
    exit(0);

    default:
    printf("\n!! Invalid Option !!\n");
    printf("!! Please enter valid option !!\n\n");
    redirect();
  }
}

void redirect()
{
  printf("1. Add to List\n2. Print List\n3. Exit\nEnter your choice : ");
  scanf("%d", &ch);
  choice(ch);
}

void main()
{
    redirect();
}
