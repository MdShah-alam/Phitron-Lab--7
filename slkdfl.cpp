#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],s[]="heidi";
    int cot=0;
    scanf("%s",str);

    for(int i=0;i<strlen(s);i++)
    {
        if(strlen(str)>5)
        {
            for(int j=0;j<strlen(str);j++)
            {
                if(s[i]==str[j])
                {
                    cot++;
                    if(cot==5)
                    {
                        printf("YES");
                        return 0;
                    }
                }
            }
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
