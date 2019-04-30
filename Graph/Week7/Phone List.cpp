//Anik_Modak
#include<bits/stdc++.h>
#define FREE(p) free(p); p = NULL;
using namespace std;

struct TrieNode
{
    map<char,TrieNode*> child;
};
map<TrieNode*,int> mp;

void insert(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];

        if(!node)
        {
            node=new TrieNode();
            current->child[word[i]]=node;
        }
        current=node;
        mp[node]++;
    }
}

bool prefixsearch(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];
        if(!node)
            return false;
        current=node;
    }
    if(mp[current]>1) return true;
    return false;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, ck=0;
        cin>>n;

        string s[n];
        TrieNode *root = new TrieNode();

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            insert(root,s[i]);
        }

        sort(s,s+n);
        for(int i=0; i<n; i++)
        {
            if(prefixsearch(root,s[i])) ck=1;
        }

        if(ck) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        mp.clear();
    }
}

