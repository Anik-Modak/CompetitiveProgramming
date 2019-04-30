#include <stdio.h>
int main(){
    int m,p,n,i,j;
    while(scanf("%d%d",&n,&m),n!=0 && m!=0)
    {
        long long v,a[n],r=0;
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        for(i=0;i<m;i++) {
            scanf("%lld",&v);
            j=i;
            while(j<n && a[j]<v) j++;
            if(a[j]==v) r++;
        }
        printf("%d\n",r);
    }
    return 0;
}
