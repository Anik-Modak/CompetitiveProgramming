#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        string a;
        stack<string>bs;
        stack<string>fs;

        bs.push("http://www.lightoj.com/");
        printf("Case %d:\n",c);

        while(cin>>a)
        {
            if(a=="QUIT") break;
            else if(a=="VISIT") continue;
            else if(a=="BACK"){
                    if(bs.size()<=1) cout<<"Ignored"<<endl;
                    else{
                        fs.push(bs.top());
                        bs.pop();
                        cout<<bs.top()<<endl;
                    }
            }
            else if(a=="FORWARD"){
                    if(fs.size()==0) cout<<"Ignored"<<endl;
                    else{
                        cout<<fs.top()<<endl;
                        bs.push(fs.top());
                        fs.pop();
                    }
            }
            else{
                bs.push(a);
                cout<<bs.top()<<endl;
                while(fs.size()) fs.pop();
            }
        }
    }
}
