#include<stdio.h>
int main()
{
    int i,j,k,tam,n[1000],c=1,l=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i;j<t;j++)
        {
            if(n[i]<n[j]){
                tam=n[j];
                n[j]=n[i];
                n[i]=tam;
            }
        }
        printf("%d ",n[i]);
    }
     for(i=0;i<t;)
     {
         c=0;
         for(j=0;j<t;j++)
         {
             if(n[i]==n[j])
             {
                 c=c+1;
             }
         }
        printf("%d = %d\n",n[i],c);
        i=i+c;
     }
    return 0;
}
