#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=1; sum<=n ;i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum=sum+j;
        }
        if(sum<=n)
            count++;
    }
    printf("%d",count);
}
