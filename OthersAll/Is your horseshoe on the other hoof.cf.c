#include<stdio.h>
int main()
{
    long long a[6],i,j,c,max=0,min=5;
    for(i=1;i<=4;i++){
        scanf("%lld",&a[i]);
    }
    for(i=1;i<=4;i++){
        c=0;
        for(j=1;j<=4;j++)
            if(a[i]==a[j])c++;
            if(max<=c) max=c;
            if(min>=c) min=c;
    }
    if(max==min&&c==2) max++;
    printf("%lld\n",max-1);
    return 0;
}
