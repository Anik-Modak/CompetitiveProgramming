#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,t,max=0,a[26]={0};
    char c[10000],s='A';
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]s",c);
        n=strlen(c);
        for(i=0;i<n;i++){
           for(j=0;j<26;j++){
             if(c[i]=='A'+j||c[i]=='a'+j) a[j]++;
             if(a[j]>max) max=a[j];
           }
        }
    }
    for(i=max;i>0;i--){
        for(j=0;j<26;j++){
            if(a[j]==i) printf("%c %d\n",s+j,i);
        }
    }
    return 0;
}
