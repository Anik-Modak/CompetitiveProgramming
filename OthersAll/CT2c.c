#include<stdio.h>
int main()
{
    int i,j,n,q,n1[100],n2[100],t1,t2,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&n1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&n2[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(n1[i]<n1[j]){
                t1=n1[j];
                n1[j]=n1[i];
                n1[i]=t1;
            }
            if(n2[i]<n2[j]){
                t2=n2[j];
                n2[j]=n2[i];
                n2[i]=t2;
            }
        }
    }
    scanf("%d",&q);
    for(i=0;i<n;i++){
       if(n1[i]*n2[i]>q) c++;
    }
    printf("%d\n",c);
    return 0;
}
