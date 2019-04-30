#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();

    while(n--)
    {
        char a[130];
        int m=0,i,c=0,d=0;
        cin>>a;

        m=strlen(a);
        if(m>0)
        {
            for(i=0; i<m; i++)
            {
                if(a[i]=='(')
                    c++;
                else if(a[i]==')')
                    c--;
                else if(a[i]=='[')
                    d++;
                else if(a[i]==']')
                    d--;
            }
        }
        if(c==0&&d==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}

