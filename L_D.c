#include<stdio.h>
#include<conio.h>

void print(int n, int arr[],int count[])
{
    for(int i=0; i<n; i++)
    {
        int b=arr[i];
        if(count[b]>2)
        {
            printf("%d\n",b);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}

void counter(int n,int arr[])
{
    int count[200001]={0};
    for(int i=0; i<n; i++)
    {
        int b=arr[i];
        count[b]++;
    }
    print(n,arr,count);
}

void input(int n)
{
    for(int i=0; i<n; i++)
    {
        int d;
        scanf("%d",&d);
        int arr[d];
        for(int i=0; i<d; i++)
        {
            scanf("%d",&arr[i]);
        }
        counter(d,arr);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    input(n);
}
