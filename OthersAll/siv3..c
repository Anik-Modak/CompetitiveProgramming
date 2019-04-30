#include<stdio.h>
int main(){
    int i,j,n,a[1000]={0};
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        for(j=i+i;j<=n;j=j+i){
            if(j%i==0) a[j]=1;
        }
    }
    for(i=1;i<=n;i++){
        if(a[i]==0) printf("%d\n",i);
    }
    return 0;
}
