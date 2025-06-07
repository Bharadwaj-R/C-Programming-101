#include<stdio.h>
#include<string.h>
/*
Variables Used in the program
string[200] - char array - to store the input string
check[200] - char array - to store the input array in lower case
i,j,k - int - loop variables for iterations
len - int - to store length of the input string
words - int - to store the number of words in the input string
csmall - int - to store the number of small case alphabets
ccaps - int - to store the number of capital case alphabets
cspec - int - to store the number of special characters
cspace - int - to store the number of spaces
ctab - int - to sote the number of tab spaces
arr[20][10] - char array - to store the words separately
alpha[27] - char array - to store the alphabets from a to z
f[26] - to store the frequencies of a to z alphabets in the respective number conversion
cv - int - to store the frequency of all Vowels
cc - int - to store the frequency of all the Consonants
*/
char string[200],check[200];
int i,len, words, csmall=0, ccap=0, cspec=0, cspace=0, ctab=0, j=0;
void search()
{
  printf("Search\n------\n\n");
  char ch;
  printf("enter the character to search the words:\n");
  scanf("%c",&ch);
  char ar[20][10];
  int k=0;
  for(i=0;i<20;i++)
  {
    for(j=0;j<10;j++)
    {
      ar[i][j]=string[k];
      k++;
      if(ar[i][j]==' ' || ar[i][j]=='\t')
      {
        ar[i][j]='\0';
        break;
      }
    }
  }
  words=i;
  printf("\n");
  for(i=0;i<words;i++)
  {
    for(j=0;j<10;j++)
    {
      if(ar[i][j]==ch)
      {
        printf("%s\n",ar[i]);
        break;
      }
    }
  }
}
void wordprint()
{
  printf("Words one by one\n----------------\n\n");
  for(i=0;i<len;i++)
  {
    printf("%c",string[i]);
    if(string[i]==' ' || string[i]=='\t')
    {
      printf("\n");
    }

  }
  printf("\n\n");
}
void convert()
{
  printf("\n\nconvert * and #\n---------------\n\n");
  for(i=0;i<len;i++)
  {
    if(check[i]=='a' || check[i]=='e' || check[i]=='i' || check[i]=='o' || check[i]=='u')
    {
      check[i]='*';
    }
    else if(check[i]>=97&&check[i]<=122)
    {
      check[i]='#';
    }
    printf("%c",check[i]);
  }
  printf("\n\n");
}
void frequency()
{
  char alpha[27];
  int f[26];
  printf("\n\n");
  printf("vowels:\n\n");
  for(i=0;i<26;i++)
  {
    alpha[i]=i+97;
    f[i]=0;
    for(j=0;j<len;j++)
    {
      if(alpha[i]==check[j])
      {
        f[i]++;
      }
    }
    if(alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
    {
      printf("%c - %d\n",alpha[i],f[i]);
    }
  }
  printf("\nConsonants:\n");
  for(i=0;i<26;i++)
  {
    if(alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
    {
      continue;
    }
    printf("%c - %d\n", alpha[i],f[i]);
  }
  printf("\n\n");
}
void vowelconsonant()
{
  printf("Vowels and Consonants\n---------------------\n");
  int cv=0, cc=0;
  for(i=0;i<len;i++)
  {
    if(check[i]=='a'||check[i]=='e'||check[i]=='i'||check[i]=='o'||check[i]=='u')
    {
      cv++;
    }
    else
    {
      cc++;
    }
  }
  printf("\nVowels : %d\nConsonants : %d\n",cv,cc-cspace-cspec-ctab);
}
void toggle()
{
  printf("\ntoggle\n------\n\n");
  for(i=0;i<len;i++)
  {
    if(string[i]>=96&&string[i]<=122)
    {
      printf("%c",string[i]-32);
    }
    else if(string[i]>=65&&string[i]<=90)
    {
      printf("%c",string[i]+32);
      check[i]=string[i]+32;
    }
    else
    {
      printf("%c",string[i]);
    }
  }
  printf("\n\n");
}
void count()
{
  for(i=0;i<len;i++)
  {
    if(string[i]>=96&&string[i]<=122)
    {
      csmall++;
    }
    else if(string[i]>=65&&string[i]<=90)
    {
      ccap++;
    }
    else if(string[i]==' ')
    {
      cspace++;
    }
    else if(string[i]=='\t')
    {
      ctab++;
    }
    else
    {
      cspec++;
    }
  }
  printf("Count\n-----");
  printf("\n\nUpper Case: %d\nLower Case: %d\nSpecial characters(including spaces and tabs): %d\nSpaces: %d\nTab spaces: %d\n\n",
   ccap, csmall, cspec+cspace+ctab, cspace, ctab);
   return;
}
void main()
{
  printf("enter the string:\n");
  for(i=0;i<200;i++)
  {
    scanf("%c",&string[i]);
    check[i]=string[i];
    if(string[i]=='\n')
    {
      string[i]='\0';
      check[i]='\0';
      break;
    }
  }
  len=i;
  count();
  toggle();
  vowelconsonant();
  frequency();
  search();
  convert();
  wordprint();
}
