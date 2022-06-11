#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k;

    if(n%2==0)
    {
        k=n/2;
        printf("%d\n",k);
        for(int i=1; i<=k; i++)
        {
            printf("2 ");
        }
    }
    else
    {
        k=n/2;
        printf("%d\n",k);
        for(int i=1; i<k; i++)
        {
            printf("2 ");
        }
        printf("3");
    }
}
