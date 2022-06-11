#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int a=0,a1=0,b=0,b1=0;
    for(int i=0; i<strlen(str); i++)
    {
        char ch=str[i]-'0';
        if(ch==0)
        {
            a++;
            a1=1;
            if(a>6 && b1==1)
            {
                printf("YES");
                return 0;
            }
            if(b>6 && a1==1)
            {
                printf("YES");
                return 0;
            }
            b=0;
        }
        else
        {
            b++;
            b1=1;
            if(b>6 && a1==1)
            {
                printf("YES");
                return 0;
            }
            if(a>6 && b1==1)
            {
                printf("YES");
                return 0;
            }
            a=0;
        }
    }
    printf("NO");
}
