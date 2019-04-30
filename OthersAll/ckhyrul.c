#include<stdio.h>
int main()
{
int n,m,i,j,z;
char x;
scanf("%d%d",&n,&m);
z=n*m;
for(i=1;i<=z;i++)
{
  scanf("%c",&x);
}
if(x=='Y'||x=='C'||x=='M'||x=='G')
    printf("#Color\n");
else
    printf("#Black&White\n");
return 0;
}
