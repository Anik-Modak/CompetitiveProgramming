#include<stdio.h>
int x[10]={1,4,3,6,8,2,9,0,5,7};
int i,j,k,t,big,p;
int main(){
    for(i=1;i<=5;i++){
        big=x[i];
        for(j=i;j<=5;j++){
            if(x[j]>big)
                p=j+1;
        }
        t=x[p];
        x[p]=x[i];
        x[i]=t;
    }
    for(k=1;k<8;k++){
        printf("%d th %d\n",k,x[k]);
    }
    return 0;
}
