#include<stdio.h>
#include<string.h>

void check(char str[])
{
    if(str[0]>='A' && str[0]<='Z')
    {
        if(str[1]>='A' && str[1]<='Z')
        {
            for(int i=0; i<strlen(str); i++)
            {
                str[i]=str[i]+32;
            }
            printf("%s",str);
            return 0;
        }
        else
        {
            printf("%s",str);
            return 0;
        }
    }
    else
    {
        if(str[1]>='A' && str[1]<='Z')
        {
            str[0]= toupper(str[0]);
            for(int i=1; i<strlen(str); i++)
            {
                str[i]=str[i]+32;
            }
            printf("%s",str);
            return 0;
        }
    }
    printf("%s",str);
    return 0;
}

int main()
{
    char str[100];
    scanf("%s",str);
    check(str);
}
