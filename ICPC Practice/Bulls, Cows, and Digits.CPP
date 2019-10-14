#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s[10] = {"0123", "1234", "2345", "3456", "4567", "5678", "6789", "7890", "8901", "9012"};

    string tmp;
    int b, c, pre;
    for(int i=0; i<10; i++)
    {
        cout<<s[i]<<"\n";
        cin>>b>>c;

        if(b==4)
            return 0;

        if(b > 0)
        {
            pre = b;
            tmp = s[i];
            break;
        }
    }

    int pos = 0;
    for(char ch = '0'; ch <= '9'; ch++)
    {
        int ck = 1;
        for(int i=0; i<4; i++)
            if(ch==tmp[i])
                ck = 0;
        if(ck)
        {
            for(int i=0; i<4; i++)
            {
                string t = tmp;
                t[i] = ch;
                cout<<t<<"\n";
                cin>>b>>c;

                if(b==pre-1)
                {
                    pos = i;
                    break;
                }
            }
            break;
        }
    }

    string tmp2[10];
    char fixed = tmp[pos];

    for(int i=0; i<4; i++)
    {
        int jd = 0;
        if(i==pos)
        {
            while(jd < 9)
            {
                tmp2[jd].push_back(fixed);
                jd++;
            }
            continue;
        }

        for(char ch ='0'+i+1; ch <='9'; ch++)
        {
            if(ch==fixed)
                continue;

            tmp2[jd].push_back(ch);
            jd++;
        }

        for(char ch = '0'; ch <='0'+ i; ch++)
        {
            if(ch==fixed)
                continue;

            tmp2[jd].push_back(ch);
            jd++;
        }
    }

    for(int i=0; i<9; i++)
    {
        cout<<tmp2[i]<<"\n";
        cin>>b>>c;

        if(b==4)
            return 0;

        if(b > 1)
        {
            pre = b;
            tmp = tmp2[i];
            break;
        }
    }

    int pos2 = 0;
    for(char ch = '0'; ch <= '9'; ch++)
    {
        int ck = 1;
        for(int i=0; i<4; i++)
            if(ch==tmp[i])
                ck = 0;
        if(ck)
        {
            for(int i=0; i<4; i++)
            {
                if(i==pos)
                    continue;

                string t = tmp;
                t[i] = ch;
                cout<<t<<"\n";
                cin>>b>>c;

                if(b==4)
                    return 0;
                if(b == pre-1)
                {
                    pos2 = i;
                    break;
                }
            }
            break;
        }
    }

    char fixed2 = tmp[pos2];
    string tmp3[10];

    for(int i=0; i<4; i++)
    {
        int jd = 0;
        if(i==pos)
        {
            while(jd < 8)
            {
                tmp3[jd].push_back(fixed);
                jd++;
            }
            continue;
        }

        if(i==pos2)
        {
            while(jd < 8)
            {
                tmp3[jd].push_back(fixed2);
                jd++;
            }
            continue;
        }

        for(char ch ='0'+i+1; ch <='9'; ch++)
        {
            if(ch==fixed || ch == fixed2)
                continue;

            tmp3[jd].push_back(ch);
            jd++;
        }

        for(char ch = '0'; ch <= '0'+ i; ch++)
        {
            if(ch==fixed || ch == fixed2)
                continue;

            tmp3[jd].push_back(ch);
            jd++;
        }
    }

    for(int i=0; i<8; i++)
    {
        cout<<tmp3[i]<<"\n";
        cin>>b>>c;

        if(b==4)
            return 0;

        if(b > 2)
        {
            pre = b;
            tmp = tmp3[i];
            break;
        }
    }

    int pos3 = 0;
    for(char ch = '0'; ch <= '9'; ch++)
    {
        int ck = 1;
        for(int i=0; i<4; i++)
            if(ch==tmp[i])
                ck = 0;
        if(ck)
        {
            for(int i=0; i<4; i++)
            {
                if(i==pos || i==pos2)
                    continue;

                string t = tmp;
                t[i] = ch;
                cout<<t<<"\n";
                cin>>b>>c;

                if(b==4)
                    return 0;

                if(b==pre-1)
                {
                    pos3 = i;
                    break;
                }
            }
            break;
        }
    }

    char fixed3 = tmp[pos3];
    string ans = "####";
    for(int i=0; i<4; i++)
    {
        if(i==pos)
            ans[i] = fixed;
        else if(i==pos2)
            ans[i] = fixed2;
        else if(i==pos3)
            ans[i] = fixed3;
    }

    for(int i=0; i<4; i++)
    {
        if(ans[i]=='#')
        {
            for(char ch = '0'; ch <= '9'; ch++)
            {
                if(ch==fixed || ch == fixed2 || ch==fixed3)
                    continue;

                ans[i] = ch;
                cout<<ans<<"\n";
                cin>>b>>c;

                if(b==4)
                    return 0;
            }
        }
    }
    return 0;
}
