#include <stdio.h>
int main()
{
    int i,j,a,b,n,l=1,mx=0;
    while(scanf("%d%d",&a,&b)==2){
        for(i=a;i<=b;i++){
                n=i;
            while(n!=1){
                if(n%2==1){
                    n=3*n+1;
                    l++;
                }
        else if(n%2 == 0){
            n=n/2;
            l++;
            }
        }
            if(l>mx){
                mx=l;
            }
        }
        printf("%d\n",mx);
    }

    return 0;
}
