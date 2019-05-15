//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int division(string a, int n)
{
    int i,r=0;
    for(i=0; i<a.size(); i++)
    {
        r=r*10+(a[i]-'0');
        r=r%n;
    }
    return r;
}

string BFS(int n)
{
    queue<string>q ;
    string s = "1";
    q.push(s) ;

    while(!q.empty())
    {
        s = q.front() ;
        q.pop() ;

        if(division(s,n))
        {
            q.push(s+"0");
            q.push(s+"1");
        }
        else
            return s;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        cout<<BFS(n)<<"\n";
    }
    return 0;
}
