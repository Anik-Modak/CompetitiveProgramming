int main()
{
    int i,t,a,n,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        a=0;
        while(n>0){
            n=n-m;
            a++;
            if(n<=0)
                break;
            else
                n++;
        }
        if(n==0)
            printf("%d\n",a);
        else
            printf("cannot do this\n");
    }
    return 0;
}
