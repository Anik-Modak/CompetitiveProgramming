#include<stdio.h>
int main()
{
    int i,j,l,t,a[100],b,c,d,e,q,n,p;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%d",&n);
        if(n<10){
            for(i=0;i<10;i++)
            {
                if(i==0||i>n)
                    c=0;
                else
                    c=1;
                if(i==9)
                    printf("%d",c);
                else
                    printf("%d ",c);
            }
            printf("\n");
        }
        else if(n>=10&&n<100){
            for(i=1;i<=9;i++){
                a[0]=0;
                a[i]=1;
            }
            for(j=10;j<=n;j++)
            {
                    b=j/10;
                    c=j%10;
                    if(b==c)
                        a[b]=a[b]+1;
                    if(b==0||c==0)
                        a[0]=a[0]+1;
                    if(b==1||c==1)
                        a[1]=a[1]+1;
                    if(b==2||c==2)
                        a[2]=a[2]+1;
                    if(b==3||c==3)
                        a[3]=a[3]+1;
                    if(b==4||c==4)
                        a[4]=a[4]+1;
                    if(b==5||c==5)
                        a[5]=a[5]+1;
                    if(b==6||c==6)
                        a[6]=a[6]+1;
                    if(b==7||c==7)
                        a[7]=a[7]+1;
                    if(b==8||c==8)
                        a[8]=a[8]+1;
                    if(b==9||c==9)
                        a[9]=a[9]+1;
            }
            for(i=0;i<=9;i++){
                if(i==9)
                    printf("%d",a[i]);
                else
                    printf("%d ",a[i]);
            }
            printf("\n");
        }
        else if(n>=100&&n<1000){

            for(i=1;i<=9;i++){
                a[0]=9;
                a[i]=20;
            }
            for(j=100;j<=n;j++)
            {
                    b=j/100;
                    p=j%100;
                    c=p/10;
                    d=p%10;
                    if(b==c&&b==d)
                        a[b]=a[b]+2;
                    else if(b==c)
                        a[b]=a[b]+1;
                    else if(b==d)
                        a[b]=a[b]+1;
                    else if(d==c)
                        a[c]=a[c]+1;
                    if(b==0||c==0||d==0)
                        a[0]=a[0]+1;
                    if(b==1||c==1||d==1)
                        a[1]=a[1]+1;
                    if(b==2||c==2||d==2)
                        a[2]=a[2]+1;
                    if(b==3||c==3||d==3)
                        a[3]=a[3]+1;
                    if(b==4||c==4||d==4)
                        a[4]=a[4]+1;
                    if(b==5||c==5||d==5)
                        a[5]=a[5]+1;
                    if(b==6||c==6||d==6)
                        a[6]=a[6]+1;
                    if(b==7||c==7||d==7)
                        a[7]=a[7]+1;
                    if(b==8||c==8||d==8)
                        a[8]=a[8]+1;
                    if(b==9||c==9||d==9)
                        a[9]=a[9]+1;
                }
            for(i=0;i<=9;i++){
                if(i==9)
                    printf("%d",a[i]);
                else
                    printf("%d ",a[i]);
            }
            printf("\n");
        }
       else if(n>=1000&&n<10000)
        {
         for(i=1;i<=9;i++){
                a[0]=189;
                a[i]=300;
            }
           for(j=1000;j<=n;j++)
            {
                    b=j/1000;
                    p=j%1000;
                    c=p/100;
                    q=p%100;
                    d=q/10;
                    e=q%10;
                    if(b==c&&c==d&&d==e)
                        a[b]=a[b]+3;
                    else if(b==c&&b==d)
                        a[b]=a[b]+2;
                    else if(b==c&&b==e)
                        a[b]=a[b]+2;
                    else if(d==c&&d==e)
                        a[c]=a[c]+2;
                    else if(b==d&&b==e)
                        a[b]=a[b]+2;
                    else{
                    if(b==c)
                        a[b]=a[b]+1;
                    else if(b==d)
                        a[b]=a[b]+1;
                    else if(b==e)
                        a[b]=a[b]+1;
                    if(d==e)
                        a[d]=a[d]+1;
                    else if(c==e)
                        a[c]=a[c]+1;
                    else if(c==d)
                        a[c]=a[c]+1;
                    }
                    if(b==0||c==0||d==0||e==0)
                        a[0]=a[0]+1;
                    if(b==1||c==1||d==1||e==1)
                        a[1]=a[1]+1;
                    if(b==2||c==2||d==2||e==2)
                        a[2]=a[2]+1;
                    if(b==3||c==3||d==3||e==3)
                        a[3]=a[3]+1;
                    if(b==4||c==4||d==4||e==4)
                        a[4]=a[4]+1;
                    if(b==5||c==5||d==5||e==5)
                        a[5]=a[5]+1;
                    if(b==6||c==6||d==6||e==6)
                        a[6]=a[6]+1;
                    if(b==7||c==7||d==7||e==7)
                        a[7]=a[7]+1;
                    if(b==8||c==8||d==8||e==8)
                        a[8]=a[8]+1;
                    if(b==9||c==9||d==9||e==9)
                        a[9]=a[9]+1;
                }
            for(i=0;i<=9;i++){
                if(i==9)
                    printf("%d",a[i]);
                else
                    printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
