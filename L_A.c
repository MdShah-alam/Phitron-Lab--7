#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    char ch;
    scanf(" %c",&ch);
    int sum=0;

    if(ch=='b')
    {
        for(int i=0; i<n; i+=2)
        {
            sum=sum+ar[i];
        }
    }
    else if(ch=='g')
    {
        for(int i=1; i<n; i+=2)
        {
            sum=sum+ar[i];
        }
    }
    printf("%d",sum);
}
