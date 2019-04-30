#include<bits/stdc++.h>
using namespace std;

struct node
{
    int b, h;
    node *left, *right;
};

node* make_node(int k)
{
    node *x = new node();

    x->b = k;
    x->h = rand();

    x->left = x->right = NULL;
    return x;
}

node *root = NULL;
void print(node *T)
{
    if(T==NULL)
        return;

    print(T->left);
    cout<<T->b<<" ";
    print(T->right);
}

void spilt(node *T, node **L, node **R, int x)
{
    if(T == NULL)
    {
        *L = *R = NULL;
        return;
    }

    node *TL;
    node *TR;

    if(T->b < x)
    {
        spilt(T->right, &TL, &TR, x);
        *L  = T;
        *R  = TR;
        T->right = TL;
    }
    else
    {
        spilt(T->left, &TL, &TR, x);
        *R  = T;
        *L  = TL;
        T->left = TR;
    }
}

int main()
{
    int n;
    cin>>n;

    node *T = make_node(n);
    cout<<"Root: ";
    print(T);

    node *L, *R;
    spilt(T, &L, &R, n);

    cout<<"Left: ";
    print(L);

    cout<<"Right: ";
    print(R);
}
