//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int ID;
int Index(char ch)
{
    if(ch=='A')
        return 0;
    if(ch=='T')
        return 1;
    if(ch=='G')
        return 2;
    if(ch=='C')
        return 3;
}

struct TrieNode
{
    int id;
    TrieNode *child[5] = {NULL};
    TrieNode *next;
};
map<int, int> mp;

void insert(TrieNode *root, string word)
{
    TrieNode *current = root;
    for(int i=0; i<word.size(); i++)
    {
        int ch = Index(word[i]);
        TrieNode *node = current->child[ch];

        if(!current->child[ch])
        {
            node = new TrieNode();
            node->id = ++ID;
            current->child[ch] = node;
        }
        else
        {
            mp[node->id]++;
            current->next = node;
        }
        current = node;
    }
    current->next = NULL;
}

void freeList(struct TrieNode* head)
{
    TrieNode* tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s[n];
        ID = 0;
        TrieNode *root = new TrieNode();

        int len, mx = 0;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            insert(root,s[i]);
            len = s[i].size();
            mx = max(mx, len);
        }

        int ans = 0, cnt  = 0;
        TrieNode *ptr = root;

        while(ptr->next != NULL)
        {
            cnt++;
            int pos = ptr->next->id;
            int tmp = (mp[pos]+1)*cnt;
            ans = max(ans, tmp);
            ptr = ptr->next;
        }

        cout<<"Case "<<++cas<<": "<<max(ans,mx)<<"\n";
        mp.clear();
        freeList(root);
    }
    return 0;
}
