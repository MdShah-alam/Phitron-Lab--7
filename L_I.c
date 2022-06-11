#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf(" %s",str);

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='n')
        {
            printf("1");
            printf(" ");
        }
    }
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='z')
            printf("0 ");
    }
}
