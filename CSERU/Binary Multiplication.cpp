//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    string result = "";
    int s = 0;

    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);

        result = char(s % 2 + '0') + result;
        s /= 2;
        i--; j--;
    }
    return result;
}

int main()
{
    int ch=0;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        if(s1=="0"&&s2=="0") break;
        else if(ch) cout<<endl;

        int n1 = s1.size();
        int n2 = s2.size();


        vector<string>v;
        for(int i=n2-1, j=0; i>=0; i--,j++)
        {
            if(s2[i]=='0')
            {
                string s="";
                s.resize(n1+j,'0');
                v.push_back(s);
            }
            else{
                string s=s1;
                s.resize(s.size()+j,'0');
                v.push_back(s);
            }
        }

        string sum=v[0];
        for(int i=1; i<v.size(); i++)
        {
            sum = addBinary(sum,v[i]);
        }
        int len = sum.size();

        cout<<setw(len)<<s1<<endl;
        cout<<setw(len)<<s2<<endl;

        string tmp="";
        tmp.resize(max(n1,n2),'-');
        cout<<setw(len)<<tmp<<endl;

        for(int i=0; i<v.size(); i++)
        {
            v[i].resize(s1.size());
            cout<<setw(len-i)<<v[i]<<endl;
        }

        tmp.resize(len,'-');
        cout<<setw(len)<<tmp<<endl;
        cout<<sum<<endl;
        ch=1;
    }
}
