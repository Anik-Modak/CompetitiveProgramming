#include<bits/stdc++.h>
#define MX 10005
#define pii pair<int,int>
using namespace std;

vector<int>ed[MX];
int vs[MX],pr[MX];

bool dfs(int f){
    stack<int>st;
    st.push(f);
    while(!st.empty()){
        f = st.top();
        st.pop();
        if(vs[f]) return 1;
        vs[f] = 1;
        for(int i=0;i<ed[f].size();i++){
            int v = ed[f][i];
            if(!vs[v]){
                st.push(v);
            }
        }
    }
    return 0;
}


int main(){
    int i,j,k,x,y,n,m,cn=0;

    freopen("PTO7Y.txt","r",stdin);

    scanf("%d %d",&n,&m);

    for(i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        ed[x].push_back(y);
        ed[y].push_back(x);
    }

    cn = dfs(1); /// if visiting same node

    for(i=1;i<=n;i++){
        if(!vs[i]) cn = 1; /// if any node left
    }

    if(!cn) puts("YES");
    else puts("NO");

    return 0;
}
