#include<stdio.h>

int max1(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min1(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int max,min;
    int ans=0;
    max=ar[0];
    min=ar[0];

    for(int i=1;i<n;i++)
    {
        if((max<ar[i])||(min>ar[i]))
        {
            ans++;
        }
        max=max1(ar[i],max);
        min=min1(ar[i],min);
    }

    printf("%d",ans);
}
