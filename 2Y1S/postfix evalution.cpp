#include<bits/stdc++.h>
using namespace std;

stack<int>s;

int main()
{
    string str;
    cin>>str;
    int a,b,i,cal;
    for(i=0; i<str.size(); i++)
    {
        if(isdigit(str[i])) s.push(str[i]-'0');
        else{
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            if(str[i]=='+') cal=b+a;
            else if(str[i]=='-') cal=b-a;
            else if(str[i]=='*') cal=b*a;
            else if(str[i]=='/') cal=b/a;
            s.push(cal);
        }
    }
    cout<<s.top()<<endl;
}
