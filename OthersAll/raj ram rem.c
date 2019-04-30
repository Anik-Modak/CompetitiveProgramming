#include<stdio.h>
int main()
{
    int t,i,j,n,m,f1[50],f2[50],r1[50],r2[50];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&f1[j]);
            r1[j]=0;
        }
        for(j=1;j<=n;j++){
            if(f1[j]==1) r1[1]++;
            if(f1[j]==2) r1[2]++;
            if(f1[j]==3) r1[3]++;
        }
        scanf("%d",&m);
        for(j=1;j<=m;j++){
            scanf("%d",&f2[j]);
            r2[j]=0;
        }
        for(j=1;j<=n;j++){
            if(f2[j]==1) r2[1]++;
            if(f2[j]==2) r2[2]++;
            if(f2[j]==3) r2[3]++;
        }
        for(j=1;j<=3;j++){
            if(r1[j]==r2[j]) printf("Draw ");
            else if(r1[j]>r2[j]) printf("Rem ");
            else printf("Ram ");
        }
        printf("\n");
    }
    return 0;
}
