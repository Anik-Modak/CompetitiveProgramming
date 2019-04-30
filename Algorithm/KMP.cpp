#include<bits/stdc++.h>
using namespace std;

#define MX 1000005
///Largest possible suffix-prefix upto this index
int lps[MX];

/// if starting index is 0 then then and not equal then put prefix size = 0
/// otherwise cmopearing to previous keyucture
/// prefix size is (j+1) as key i 0 based index

void lps_calc(char key[])
{
    int i = 1,j = 0;
    while(key[i])
    {
        //cout<<"ff\n";
        if(key[i]==key[j])
        {
            lps[i] = ++j;
            i++;
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                lps[i++] = 0;
        }
    }
}
/**
*   when all of the key string is substring of txt[]
*   then returning starting position of this match
*   @return -1 if no match found else return staring position of match
*/
int match(char txt[],char key[],int key_ln)
{
    int i=0,j=0,cn=0;
    while(txt[i])
    {
        //cout<<i<<endl;
        if(txt[i]==key[j])
        {
            i++;
            j++;
            if(j==key_ln)
            {
                //return i - key_ln;
                cn++;
                j=lps[j-1];
                //cout<<i-1<<"--------------------------"<<endl;
            }
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                i++;
            /// j = 0 and pos are not equal then skipping this position
        }
    }
    return cn;
}

char txt[MX],key[MX];

int main()
{
    int x,i,j,k,ts,cas=0,cn;
    //freopen("1255.txt","r",stdin);
    cin>>ts;
    while(++cas<=ts)
    {
        scanf("%s %s",txt,key);
        memset(lps,0,sizeof lps);
        k = strlen(key);
        lps_calc(key);
        cn = match(txt,key,k);
        printf("Case %d: %d\n",cas,cn);
    }
    return 0;
}
