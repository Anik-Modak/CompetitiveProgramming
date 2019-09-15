#include<bits/stdc++.h>
#define pii pair<int, int>
#define MX 103
using namespace std;

char direction(char x, char y)
{
    if(x=='W')
    {
        if(y=='R')
            return 'N';
        else
            return 'S';
    }

    if(x=='E')
    {
        if(y=='L')
            return 'N';
        else
            return 'S';
    }

    if(x=='N')
    {
        if(y=='R')
            return 'E';
        else
            return 'W';
    }

    if(x=='S')
    {
        if(y=='L')
            return 'E';
        else
            return 'W';
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    map<pii, bool> mp;

    while(scanf("%d%d",&n,&m)==2)
    {
        int x, y;
        char dir, pre, s[MX];
        while(scanf("%d%d %c",&x,&y,&dir)==3)
        {
            scanf("%s",s);
            int ansx = x, ansy = y, ck = 1;
            for(int i=0; i<strlen(s); i++)
            {
                if(s[i]=='R' || s[i]=='L')
                    dir = direction(dir, s[i]);
                else
                {
                    if(dir=='E')
                        ansx++;
                    if(dir=='N')
                        ansy++;
                    if(dir=='S')
                        ansy--;
                    if(dir=='W')
                        ansx--;
                }

                //printf("%d %d %c\n",ansx,ansy,dir);
                if(ansx>n || ansy>m || ansx<0 || ansy<0)
                {
                    if(ansx>n)
                        ansx--;
                    if(ansy>m)
                        ansy--;
                    if(ansx<0)
                        ansx++;
                    if(ansy<0)
                        ansy++;

                    if(mp.find({ansx, ansy}) != mp.end())
                           ck = 1;
                    else
                    {
                        mp[{ansx, ansy}] = 1;
                        ck = 0;
                        break;
                    }
                }
            }

            if(ck)
                printf("%d %d %c\n",ansx,ansy,dir);
            else
                printf("%d %d %c LOST\n",ansx,ansy,dir);
        }
    }
    return 0;
}
