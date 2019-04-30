#include<stdio.h>
int main()
{
    int i,j,k,x,tam,n[100],m,c=1,l=0,t;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%d",&x);
    if(x>10){
    for(k=1,j=1;k<=x;k++)
    {
        if(k>=10){
            n[j++]=1;
            n[j++]=k-10;
        }
        else
            n[j++]=k;
    }
    m=j-1;
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m;j++)
        {
            if(n[i]>n[j]){
                tam=n[j];
                n[j]=n[i];
                n[i]=tam;
            }
        }
    }
    for(i=1;i<=m;)
    {
         c=0;
         for(j=1;j<=m;j++)
         {
             if(n[i]==n[j]) c=c+1;
         }
         if(i==m) printf("%d\n",c);
         else printf("%d ",c);
         i=i+c;
    }
    }
    else{
        for(i=0;i<10;i++)
        {
            if(i==0||i>x) c=0;
            else c=1;
            if(i==9) printf("%d\n",c);
            else printf("%d ",c);
        }
    }
    }
    return 0;
}

