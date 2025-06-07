#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *temp = NULL;
void print()
{
  temp=head;
  printf("\nThe Elements of the Linked-List after sorting are :\n");
  while(temp != NULL)
  {
    printf("%d\n",temp->data);
    temp = temp->next;
  }
}

void addToList(struct node *new)
{
  if(head==NULL)
  {
    head=new;
  }
  else if(new->data < head->data)
  {
    new->next = head;
    head = new;
  }
  else
  {
    temp=head;
    while(temp->next != NULL && (temp->next->data < new->data ))
    {
      temp = temp->next;
    }
    new->next = temp->next;
    temp->next = new;
  }
}

void insert(int ele)
{
  struct node *new = malloc(sizeof(struct node));
  new->data = ele;
  new->next = NULL;
  addToList(new);
}

void main()
{
    int n=0, ele=0, i=0;
    printf("Enter the no. of elements to insert:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("enter the element : ");
      scanf("%d", &ele);
      insert(ele);
    }
    print();
}
