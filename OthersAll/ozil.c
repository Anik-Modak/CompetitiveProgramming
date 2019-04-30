#include<stdio.h>
#include<string.h>
sort(int n)
{
    int i,j,a[100],t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
         if(a[i]<a[j])
        {   t=a[j];
            a[j]=a[i];
            a[i]=t;
         }
    }
    printf("N[%d] = %d\n",i,a[i]);
}
}
matrix( int n){
    FILE *fp;
    int i,j;
    char str[10][50],c[50];
    printf("Enter 5 words:\n");
    for(i=0;i<n;i++)
    scanf("%s",str[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
        if(strcmp(str[i],str[j])>0){
            strcpy(c,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],c);
        }
    }
    printf("\nDictionary order:\n");
    fp=fopen("Name.txt","w");
        for(i=0;i<5;i++){
            puts(str[i]);
        fprintf(fp,"%s\n",str[i]);
        }
    fclose(fp);
    return 0;
}

int main (){
    int n;
    scanf("%d",&n);
    printf(" a matrix\n");
    matrix(n);
    sort(n);
    return 0;
}
