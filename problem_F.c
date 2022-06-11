#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf(" %s",str);
        int cin=-1;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]=='8')
            {
                cin=i;
                break;
            }
        }
        if (cin == -1)
            printf("NO\n");
        else if (strlen(str) - cin < 11)
            printf("NO\n");
        else
            printf("YEs\n");
    }
}
