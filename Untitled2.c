#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i=strcmp(str,"hiedi");
    if(i==0)
        printf("NO");
    else
        printf("YES");
}
