//Anik_Modak
#include<bits/stdc++.h>
#define MX 1007
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t, ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n;
        cin>>n;

        int a, cnt = 1;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(i && (i+1-a) <= cnt)
                cnt++;
        }
        cout<<"Case "<< ca << ": "<<cnt<<"\n";
    }
    return 0;
}
