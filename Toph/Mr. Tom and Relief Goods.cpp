#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>t>>a;
        int i,ans=0;
        if(t==1) v.push_back(a);
        else{
            for(i=0; i<v.size(); i++){
                if(v[i]>=a){
                    ans++;
                    v[i]=-1;
                }
                if(v[i]==a) break;
            }
            sort(v.begin(),v.end());
            i=ans;
            while(i--) v.erase(v.begin());
            if(ans) cout<<ans<<endl;
            else cout<<"Sorry"<<endl;
        }
    }
}

