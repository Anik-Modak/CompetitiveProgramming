//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<double,double> &a, const pair<double,double> &b)
{
    if(a.second==0||b.second==0) return (a.first > b.first);
    return (a.first/a.second < b.first/b.second);
}
int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, d;
        scanf("%d%d",&n,&d);
        vector<pair<double,double> >pr;

        double p, m;
        for(int i=0; i<n; i++)
        {
            scanf("%lf%lf",&p,&m);
            pr.push_back(make_pair(p,m));
        }
        sort(pr.begin(),pr.end(),sortbysec);

        double s1=0, s2=0;
        for(int i=d; i<n; i++)
        {
           // cout<<pr[i].first<<" "<<pr[i].second<<endl;
            s1 += pr[i].first;
            s2 += pr[i].second;
        }
        printf("Case %d: %0.6lf\n",ca,(s1/s2)*100.0);
    }
    return 0;
}
