#include<stdio.h>
#include<stdlib.h>
void main()
{
  int l=0,i=0,count=0;
  char word[20];
  printf("enter a string:\n");
  scanf("%[^\n]s", word);//takes the input till a \n is encountered, that is, untill enter is pressed.
  l=printf("%s", word);
  char check[l+1];
  for(i=0;i<l;i++)
  {
    check[i]=word[l-1-i];
  }
  for(i=0;i<l;i++)
  {
    if(word[i]!=check[i])
    {
      printf(" is not a palindrome\n");
      exit(0);
    }
  }
  printf(" is a palindrome\n");
}
