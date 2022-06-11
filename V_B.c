#include<stdio.h>

int main()
{
    char str[1000];
    gets(str);
    int count[26]={0};

    for(int i=0;i<strlen(str)-1;i++)
    {
        char ch=str[i];
        if(ch>='a' && ch<='z')
            count[ch-'a']=1;
    }
    int temp=0;
    for(char ch='a';ch<='z';ch++)
    {
        if(count[ch-'a']==1)
            temp++;
    }
    printf("%d",temp);
}
