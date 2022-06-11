#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char str[n];
    scanf("%s",str);
    int count[27]= {0};

    for(int i=0; i<strlen(str); i++)
    {
        char ch=str[i];
        if(ch>='a' && ch<='z')
        {
            count[ch-'a']=1;
        }
        else if(ch>='A' && ch<='Z')
        {
            count[ch-'A']=1;
        }
    }
    int temp=0;
    for(char ch='a',c='A'; ch<='z',c<='Z'; c++,ch++)
    {
        if(count[ch-'a']>0)
        {
            temp++;
        }
        else if(count[c-'A']>0)
        {
            temp++;
        }
    }
    if(temp==26)
        printf("YES");
    else
        printf("NO");
}
