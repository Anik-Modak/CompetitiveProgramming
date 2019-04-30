//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    map<char, TrieNode* > child;
    bool endofword;
};

void insert(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];
        //cout<<node<<endl;
        if(!node)
        {
            node=new TrieNode();
            current->child[word[i]]=node;
        }
        current=node;
    }
    current->endofword=true;
}

struct TrieNode *prefixsearch(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];
        if(!node)
            return NULL;
        current=node;
    }
    return current;
}

bool isItFreeNode(TrieNode *pNode)
{
    for(char i = 'a'; i <= 'z'; i++)
    {
        if( pNode->child[i] )
            return 1;
    }
    return 0;
}

void lexicographPrint(TrieNode * curr,string word, string prefix)
{
    if(curr-> endofword && word.size())
    {
        cout<<prefix;
        cout<<word<<endl;
    }

    for(char i = 'a'; i <= 'z'; i++)
    {
        if(curr->child[i])
        {
            word.push_back(i);
            lexicographPrint(curr->child[i],word,prefix);
            word.pop_back();
        }
    }
    word.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    TrieNode *root = new TrieNode();
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        insert(root,a);
    }

    int q, cas=0;
    cin>>q;

    while(q--)
    {
        string s, tmp;
        cin>>s;

        TrieNode *it = prefixsearch(root,s);
        printf("Case #%d:\n",++cas);

        if(it!=NULL)
        {
            if(isItFreeNode(it))
                lexicographPrint(it,tmp,s);
            else
                cout<<"No match."<<endl;
        }
        else
            cout<<"No match."<<endl;
    }
    return 0;
}



