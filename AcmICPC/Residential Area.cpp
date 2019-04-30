#include <bits/stdc++.h>
using namespace std;


int check(int ar[])
{
    //cout<<"OK\n";
    int i,c[10];
    for(i=0;i<10;i++)
    {
            c[i]=ar[i];
            //c[v]++;
        //cout<<v<<endl;
    }
    sort(c, c+10);
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<endl;
        if(c[i]!=i+1) return 0;
    }
    return 1;
}

int main()
{
    int t,n,ar[11][11],i,x,y;
    int ne[15],a=0,b=0,c=0,count=0,j,k;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
                scanf("%d",&ar[x][y]);
            }
        }

        while(1)
        {
            while(1)
            {
                for(j=a;j<=a+1;j++)
                {
                    for(k=b;k<=b+4;k++)
                    {
                        ne[c] = ar[j][k];
                        if(c==9) c = 0;
                        else c++;
                    }
                }
                if(check(ne)==1) count++;
                b++;
                if((b+4) > n) break;
            }
            a++;
            if((a+1) > n) break;
        }
        printf("Case %d: %d\n",i,count);
    }

    return 0;
}
