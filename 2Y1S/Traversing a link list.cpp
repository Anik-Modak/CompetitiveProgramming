#include<bits/stdc++.h>
using namespace std;

struct list{
    int info;
    struct list *link;
};
void traverse_list(struct list *list1)
{
    struct list *ptr;
    ptr=list1;
    while(ptr!=NULL){
        ptr->info=ptr->info+5;
        cout<<ptr->info<<endl;
        ptr=ptr->link;
    }
}
int main()
{

}
