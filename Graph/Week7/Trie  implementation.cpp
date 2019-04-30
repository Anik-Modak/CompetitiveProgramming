#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    map<char,TrieNode*> children;
    bool endofword;
    TrieNode()
    {
        endofword=false;
    }
};

void insert(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->children[ch];
       // cout<<node<<endl;
        if(!node)
        {
            node=new TrieNode();
            current->children[word[i]]=node;
        }
        current=node;
    }
    current->endofword=true;
}

bool prefixsearch(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->children[ch];
        if(!node)
            return false;
        current=node;
    }
    return true;
}

int isItFreeNode(TrieNode *pNode)
{
    for(int i = 0; i < 26; i++)
    {
        if( pNode->child[i] )
            return 0;
    }
    return 1;
}

bool deleteStr(TrieNode *pNode, string key, int level, int len)
{
    if( pNode )
    {
        if( level == len )
        {
            if( pNode->endWord )
            {
                pNode->endWord = 0;
                if( isItFreeNode(pNode) )
                    return true;
                return false;
            }
        }
        else
        {
            char index = key[level];
            if( deleteStr(pNode->child[index], key, level+1, len) )
            {
                free(pNode->child[index]);
                pNode->child[index] = NULL;
                return ( pNode->endWord && isItFreeNode(pNode) );
            }
        }
    }
    return false;
}

int main()
{
    TrieNode *root = new TrieNode();
    insert(root,"harshita");
    insert(root,"harsh");
    insert(root,"sharma");
    insert(root,"harry");

    string p;
    cout<<"Enter the prefix to be searched :";
    cin>>p;
    cout<<prefixsearch(root,p)<<endl;
    return 0;
}
