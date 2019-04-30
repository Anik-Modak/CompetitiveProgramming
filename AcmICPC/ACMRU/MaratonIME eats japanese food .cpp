//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int ar[1000][1000]={0};

bool check(int x,int y,int r)
{
    for(int i=x-r; i<=x+r; i++)
        for(int j=y-r; j<=y+r; j++)
            if(ar[i][j]==1) return 0;
    return 1;
}

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;
        getchar();

        int x,y,r;
        cin>>x>>y>>r;

        if(check(x,y,r))
        {
            cout<<"Ok\n";
            if(ch=='A'){
                for(int i=x-r; i<=x+r; i++)
                    for(int j=y-r; j<=y+r; j++) ar[i][j]=1;
            }
            else{
                for(int i=x-r; i<=x+r; i++)
                    for(int j=y-r; j<=y+r; j++) ar[i][j]=0;
            }
        }
        else cout<<"No\n";
    }
}


