#include<stdio.h>
#include<string.h>
#define Icosahedron "Icosahedron"
#define Cube "Cube"
#define Octahedron "Octahedron"
#define Dodecahedron "Dodecahedron"
#define Tetrahedron "Tetrahedron"
int main()
{
    char c[20];
    int n,i,k=0,a,b,d,e,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        getchar();
        scanf("%s",c);
        f=strcmp(c,Icosahedron);
        a=strcmp(c,Tetrahedron);
        b=strcmp(c,Cube);
        d=strcmp(c,Octahedron);
        e=strcmp(c,Dodecahedron);
        if(a==0)
            k=k+4;
        else if(b==0)
            k=k+6;
        else if(d==0)
            k=k+8;
        else if(e==0)
            k=k+12;
        else if(f==0)
            k=k+20;
    }
    printf("%d\n",k);
    return 0;
}
