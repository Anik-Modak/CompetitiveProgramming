//@AnikModak
#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> pii;

int main()
{
    int node,con;
    //freopen("inputg.txt","r",stdin);
    cin>>node>>con;
    vector<pii>v[node];
    pii p;

    for(int i=0; i<con; i++)
    {
        int s1,s2;
        cin>>s1>>p.first>>p.second;
        v[s1].push_back(p);
        /*s2=p.first;
        p.first=s1;
        v[s2].push_back(p);*/
    }
    for(int i=0; i<node; i++)
    {
        cout<<i<<" == ";
        for(int j=0; j<v[i].size(); j++)
            cout<<v[i][j].first<<" - "<<v[i][j].second<<"  ";
        cout<<endl;
    }
}
