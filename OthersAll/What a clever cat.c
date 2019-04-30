#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,s,p;
    while(1)
    {
        scanf("%d%d",&n,&m);
        s=sqrt(m);
        for(i=2;i<=100;i++)
        {
            for(j=i;j<=s;j=j*j)
            {
                if(j==m){
                    k=1;
                    break;
                }
            }
            if(k==1)
                break;
        }
    }

}
