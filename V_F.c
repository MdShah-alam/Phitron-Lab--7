#include<stdio.h>

int main()
{
    int round;
    scanf("%d",&round);
    int a,b;
    int a1=0,b1=0;

    for(int i=1;i<=round;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {

        }
        else if(a>b)
            a1++;
        else
            b1++;
    }
    if(a1==b1)
        printf("Friendship is magic!^^");
    else if(a1<b1)
        printf("Chris");
    else
        printf("Mishka");
}
