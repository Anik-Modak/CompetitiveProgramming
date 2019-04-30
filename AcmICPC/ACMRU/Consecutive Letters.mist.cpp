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

        int start = 0, end = 0, len = strlen(s);
        vector<int> v1[26];
        vector<int> v2[26];

        for(int i=1; i<len; i++)
        {
            if(s[i]==s[i-1])
                end++;
            else
            {
                v1[s[i-1]-'A'].push_back(start);
                v2[s[i-1]-'A'].push_back(end);
                start = i;
                end = i;
            }

            if(i==len-1)
            {
                v1[s[i]-'A'].push_back(start);
                v2[s[i]-'A'].push_back(end);
            }
        }

        int q;
        scanf("%d",&q);

        printf("Case %d:\n",++cas);
        while(q--)
        {
            int x, y;
            scanf("%d %d",&x,&y);

            int ch = s[y]-'A';
            if(x==1)
            {
                int mx = 0;
                for(int i=0; i<v1[ch].size(); i++)
                {
                    int diff = v2[ch][i] - v1[ch][i] + 1;
                    mx = max(mx, diff);
                }
                printf("%d\n",mx);
            }
            else
            {
                int i = upper_bound(v1[ch].begin(),v1[ch].end(),y) - v1[ch].begin() -1;
                if(y >= v1[ch][i] && y <= v2[ch][i])
                {
                    if(y==v2[ch][i])
                        v2[ch][i] = y-1;
                    else if(y==v1[ch][i])
                        v1[ch][i] = y+1;
                    else
                    {
                        v1[ch].insert(v1[ch].begin()+i+1, y+1);
                        v2[ch].insert(v2[ch].begin()+i+1, v2[ch][i]);
                        v2[ch][i] = y-1;
                    }
                }

            }
        }
    }
}
