//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca, t;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        string s;
        int n, m;
        cin >> n >> m >> s;

        while(m--)
        {
            int x, y, ans = 0;
            scanf("%d%d",&x,&y);

            string a = s, b="";
            a.resize(y);
            a.erase(0,x-1);

            for(int i=x-1; i<y-1; i++)
            {
                b.push_back(s[i]);
                a.erase(0,1);

                //cout<<b<<" "<<a<<endl;
                string ta=a, tb=b;
                reverse(ta.begin(),ta.end());
                reverse(tb.begin(),tb.end());
                //cout<<tb<<" "<<ta<<endl;

                if(a==ta && b==tb) ans++;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
