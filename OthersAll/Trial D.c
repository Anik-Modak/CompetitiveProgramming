#include<stdio.h>
#include<string.h>

int main()
{
                int a,b,A,B,T,i,j;
                char N[7],p1[7],p2[7];

                scanf("%d",&T);
                for(i=1;i<=T;i++)
                {
                    gets(N);
                    scanf("%d %d",&A,&B);
                    a=1,b=0;
                    for(;;)
                    {
                        for(j=0;j<a;j++)
                            p1[j]=N[j];
                        p1[j]='\0';
                        for(j=a;j<strlen;j++,b++)
                            p2[b]=N[j];
                        p2[j]='\0';
                        if(atoi(p1)%A==0 && atoi(p2)%B==0)
                        {
                            printf("%s %s\n",p1,p2);
                            break;
                        }
                        a++;
                        if(a>strlen(N))
                        {
                            printf("%d\n",-1);
                            break;
                        }
                    }
                }
             return 0;
}
