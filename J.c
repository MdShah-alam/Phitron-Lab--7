#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s1,s2,s3,s4;

    for(int i=1; i<=n; i++)
    {
        int count=0;
        scanf("%d%d%d %d",&s1,&s2,&s3,&s4);

        if(s1>s2 && s3>s4 && s1>s4 && s3>s2)
        {
            printf("Yes\n");
        }

        else if(s1>s2 && s3<s4 && s1>s3 && s4>s2)
        {
            printf("Yes\n");
        }

        else if(s2>s1 && s4>s3 && s2>s3 && s4>s1)
        {
            printf("Yes\n");
        }


        else if(s2>s1 && s4<s3 && s2>s4 && s3>s1)
        {
            printf("Yes\n");
        }

        else
            printf("No\n");
    }
}
