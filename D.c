#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    int count=0;
    int sum=0;
    while(n>0)
    {
        if(n>=100)
        {
            sum=sum+100;
            n=n-100;
            count++;
        }
        else if(n>=20)
        {
            sum=sum+20;
            n=n-20;
            count++;
        }
        else if(n>=10)
        {
            sum=sum+10;
            n=n-10;
            count++;
        }
        else if(n>=5)
        {
            sum=sum+5;
            n=n-5;
            count++;
        }
        else
        {
            sum=sum+1;
            n=n-1;
            count++;
        }
    }
    printf("%d",count);
}
