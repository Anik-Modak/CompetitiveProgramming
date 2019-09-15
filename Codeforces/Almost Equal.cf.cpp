//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v1, v2;
    if(n%2)
    {
        cout<<"YES\n";
        int c1 = 1, c2 = 2, ck = 1;
        for(int i=1; i<=2*n; i++)
        {
            if(c1 < 2)
            {
                v1.push_back(i);
                c1++;
            }
            else if(c2 < 2)
            {
                v2.push_back(i);
                c2++;
            }
            //cout<<c1<<v1.size()<<" "<<c2<<v2.size()<<endl;
            if(c1 == 2 && c2 == 2 && ck==1)
                c2 = 0, ck = 0;
            if(c1 == 2 && c2 == 2 && ck==0)
                c1 = 0, ck = 1;
        }

        for(int i=0; i<n; i++)
            cout<<v1[i]<<" ";
        for(int i=0; i<n; i++)
            cout<<v2[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
