#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int i,n;
    stack<int>st;

    for(i=0; i<10; i++)
        st.push(i);

    n=st.size();
    for(i=1; i<=n; i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    stack<char>sh;
    sh.push('a');
    sh.push('b');
    sh.push('c');

    cout<<sh.top()<<endl;
}

