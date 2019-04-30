#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    vector< vector<int> >v;

    for(int i=0; i<4; i++)
    {
        v.push_back ( vector<int>() );
        for(int j=0; j<4; j++)
        {
            cin>>n;
            v[i].push_back(n);
        }
    }
    for(int i=0; i<4; i++)
    {
       for(int j=0; j<4; j++) cout<<v[i][j]<<" ";
       cout<<endl;
    }
}

