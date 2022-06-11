#include<stdio.h>
#include<string.h>

void to_binary(int n)
{
    long long binary=0;
    int rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        n/=2;
        binary=binary+rem*i;
        i=i*10;
    }
    printf("%lld\n",binary);
}

int main()
{
    int a,b,c;

    printf("Enter two decimal numbers :");
    scanf("%d %d",&a,&b);

    printf("Binary of %d is = ",a);
    to_binary(a);

    printf("Binary of %d is = ",b);
    to_binary(b);

    printf("1's compliment of %d is = ",b);
    to_binary(~b);

    printf("2's compliment of %d is = ",b);
    to_binary(~b+1);

    c=a+(~b+1);

    printf("Binary of %d is = ",c);
    to_binary(c);

    printf("Ans in integer = %d\n",c);
}
