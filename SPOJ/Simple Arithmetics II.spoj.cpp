//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int calculation(int a, int b, char ch)
{
    if(ch == '%')
        return a%b;
    if(ch == '+')
        return a+b;
    if(ch=='-')
        return a-b;
    if(ch=='*')
        return a*b;
    if(ch=='/')
        return a/b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        ll n, ans;
        char op;

        cin>> n;
        ans = n;

        while(cin>>op)
        {
            if(op == '=')
                break;

            cin>>n;
            ans = calculation(ans, n, op);
        }
        cout<<ans<<endl;
    }
    return 0;
}
