#include<stdio.h>
int main()
{
long long n,m,a,b,c,s;
scanf("%lld%lld%lld",&m,&n,&a);
if(n>=a){
    b=(n/a)+1;
}
else{
    b=1;
}
if(m>=a){
    c=(m/a)+1;
}
else{
    c=1;
}
s=b*c;
printf("%lld\n",s);
return 0;
}
