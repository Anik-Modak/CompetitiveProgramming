#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1[1000];
    int k=-1,c=0;

    while(c<2)
    {
        string s2;
        if(c==0) cin>>s1[++k];
        if(c==1)
        {
            int count=0;
            getline( cin, s2);
            if(s2=="#"){
                c++;
                 break;
            }
            map<char,int>mp1;
            map<char,int>mp2;

            for(int i=0; i<s2.size(); i++) mp1[s2[i]]++;

            for(int j=0; j<k; j++)
            {
                int p=1;
                for(int l=0; l<s1[j].size(); l++)
                {
                    char ch=s1[j][l];
                    mp2[ch]++;
                }
            }
            for(int j=0; j<k; j++)
            {
                int p=1;
                for(int l=0; l<s1[j].size(); l++)
                {
                    char ch=s1[j][l];
                    if(mp1[ch]<=mp2[ch]) p=0;
                }
                if(p) count++;
            }
            cout<<count<<endl;
        }
        if(s1[k]=="#"){
            c++;
            s1[k]="*";
        }
    }
}
