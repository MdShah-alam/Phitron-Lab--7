#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int time=240-b;
    int count=0;
    int sum=0,i=1;
    int j=5;

    while(i<=a)
    {
        sum=sum+j;
        j+=5;
        if(sum<=time)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}
