#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[20];
    int count=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%s",s);
        if(strcmp(s,"Tetrahedron")==0)
        {
            count=count+4;
        }

        if(strcmp(s,"Cube")==0)
        {
            count=count+6;
        }

        if(strcmp(s,"Octahedron")==0)
        {
            count=count+8;
        }

        if(strcmp(s,"Dodecahedron")==0)
        {
            count=count+12;
        }

        if(strcmp(s,"Icosahedron")==0)
        {
            count=count+20;
        }
    }

    printf("%d",count);
}

/**Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.*/
