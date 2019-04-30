#include<stdio.h>
int main()
{
    int i,j,a,n=5,sum;
    FILE *fin,*fout;
    fin=(fopen("data.txt","r"));
    fout=(fopen("output.txt","w"));
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=n;j++){
            fscanf(fin,"%d",&a);
            sum=sum+a;
        }
        fprintf(fout,"%d\n",sum);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
