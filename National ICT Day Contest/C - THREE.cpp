#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    map<char,int>mp;
    map<char,int>mo;
    double avs,avt;
    while(t--){
        cin>>n;
        int time,s=0;
        string team;
        char p,o;
        while(n--){
            cin>>time>>team>>p>>o;
            mp[p]++;
            if(o=='A') mo[p]++;
            s=s+time;
            cout<<mp[p]<<endl;
        }
        for(i=0;i<9;i++)
        {
            p='A'+i;
            avs=(double)mp[p]/n;
            avt=(double)s/n;
            printf("%c %d %.2lf %.2lf \n",p,mo[p],avs,avt);
        }
    }
}
