#include<stdio.h>
#include<stdlib.h>
void main()
{
  int start, end, mid, find,n,i,j,temp;
  printf("Enter the number of terms\n");
  scanf("%d",&n);
  int num[n];
  start=0;
  end=n-1;
  printf("Enter the numbers one by one:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(num[i]>num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }
  printf("Sorting in ascending order done.\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",num[i]);
  }
  printf("enter the number to find:\n");
  scanf("%d",&find);
  while(start<end)
  {
    mid=start+(end-1)/2;
    if(num[mid]==find)
    {
      printf("!!! Element Found at Position %d !!!",mid+1);
      exit(0);
    }
    else if(num[mid]<find)
    {
      start=mid+1;
    }
    else if(num[mid]>find)
    {
      end=mid-1;
    }
  }
  printf("not found");
}
