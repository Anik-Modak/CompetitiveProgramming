//BinaryCode
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int main()
{
    int n, cas = 0;
    scanf("%d",&n);

    while(n--)
    {
        char s[200005];
        scanf(" %s",s);

        int len = strlen(s);
        set<int> seg;
        seg.insert(0);

        for(int i=1; i<len; i++)
        {

            if(s[i] != s[i-1])
                seg.insert(i);
        }
        seg.insert(len);

        int q;
        scanf("%d",&q);

        printf("Case %d:\n",++cas);
        while(q--)
        {
            int x, y;
            scanf("%d %d",&x,&y);

            if(x==1)
            {
                auto it = seg.upper_bound(y);
                int ans = (*it) - *(--it);
                printf("%d\n",ans);

            }
            else
            {
                seg.insert(y);
                seg.insert(y+1);
            }
        }
    }
}
