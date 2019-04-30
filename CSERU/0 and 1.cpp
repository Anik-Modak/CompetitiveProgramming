//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000000];
    int cas=0, q;

    while(scanf("%s",&str)==1)
    {
        int len=strlen(str);
        if(len == 0) break;

        cin>>q;
        printf("Case %d:\n",++cas);

        while(q--)
        {
            int i, j, cnt=0;
            cin>>i>>j;

            if(j<i) swap(i,j);
            string tmp = str;
            tmp.resize(j+1);

            if(tmp.find("0",i)!=-1) cnt++;
            if(tmp.find("1",i)!=-1) cnt++;

            if(cnt==2) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}
