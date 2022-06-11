#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  char str[10000];
  for(int i=0;i<n;i++)
  {
      scanf(" %c",str[i]);
  }
  for(int i=0;i<n;i++)
  {
      if(str[i]=='n')
        printf("1 ");
  }

    for(int i=0;i<n;i++)
  {
      if(str[i]=='z')
        printf("0 ");
  }
}
