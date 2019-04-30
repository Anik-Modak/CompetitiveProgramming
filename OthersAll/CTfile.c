#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    FILE *fp1,*fp2;
    fp1=fopen("a.b","r");
    fp2=fopen("c.d","w");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fscanf(fp1,"%d",&a);
        sum=sum+a;
    }
    fprintf(fp2,"%d\n",sum);
    return 0;
}
