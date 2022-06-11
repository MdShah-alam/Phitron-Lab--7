#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    char s[100];
    while(i<=n)
    {
        int c=0;
        scanf("%s",&s);
        int temp=strlen(s);

        for(int j=0; j<((temp+1)/2); j++)
        {
            if(s[j]==s[(temp+1)/2+j])
            {
                c++;
            }
        }
        if(c==(temp+1)/2)
            printf("Yes\n");
        else
            printf("NO\n");
        i++;
    }
}
