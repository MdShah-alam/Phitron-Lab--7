#include<stdio.h>

int main()
{
    char s[100],x[10];
    printf("Enter original string :");
    gets(s);

    printf("Enter sub_string :");
    gets(x);

    int lens=strlen(s);
    int lenx=strlen(x);
    int count;

    for(int i=0;i<lens;i++)
    {
        if(s[i]==x[0])
        {
            count=0;
            for(int j=0;i<lenx;j++)
            {
                if(s[i+j]!=x[j])
                {
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                return i;
            }
        }

    }
}
