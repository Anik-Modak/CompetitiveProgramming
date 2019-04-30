//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int heap[100], n=0;

void display()
{
    for(int i = 1; i <= n; i++) printf("%d ", heap[i]);
    cout<<endl;
}
void adjust_heap(int i)
{
    int l = i*2;
    int r = l+1, large;

    if(l <= n && heap[l] > heap[i]) large=l;
    else large=i;

    if(r <= n && heap[r] > heap[large]) large=r;

    if(large!=i){
        swap(heap[large],heap[i]);
        adjust_heap(large);
    }
}
int deleteElement()
{
    if(n>0){
        heap[1]=heap[n];
        n--;
        adjust_heap(1);
    }
}
void insert(int num, int i)
{
    int location=i, parentnode;
    while (location > 1)
    {
        parentnode =location /2;
        if (num <= heap[parentnode])
        {
            heap[location] = num;
            return;
        }
        heap[location] = heap[parentnode];
        location = parentnode;
    }
    heap[1] = num;
}

int main()
{
    int num;

    printf("Enter the number of element inserted to the list : ");
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>num;
        insert(num,i);
    }
    display();
    deleteElement();
    display();
}
