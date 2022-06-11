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

    for(int i=0,j=i+1; j<n; i++,j++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]<ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    int s=0,d=0;
    for(int i=0;i<n;i+=2)
    {
        s=s+ar[i];
    }
    for(int i=1;i<n;i+=2)
    {
        d=d+ar[i];
    }
    printf("%d %d",s,d);
}
