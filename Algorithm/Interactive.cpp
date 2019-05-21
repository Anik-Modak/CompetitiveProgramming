#include<bits/stdc++.h>

using namespace std ;

int main()
{

    ios_base::sync_with_stdio(false) ;

    int a, b, c, d, e, f, ac, ce, bc, cd ;

    map<int,pair<int,int> >mult ;
    int ar[] = {4,8,15,16,23,42} ;

    /*for(int i=0 ; i<6 ; i++)
    {
        for(int j=i+1 ; j<6 ; j++)
            mult[ar[i]*ar[j]] = {ar[i],ar[j]} ;
    }*/

    cout << "? 1 3\n" ;
    cin >> ac ;
    cout << "? 3 5\n" ;
    cin >> ce ;
    cout << "? 2 3\n" ;
    cin >> bc ;
    cout << "? 3 4\n" ;
    cin >> cd ;


    for(int i=0; i<6; i++)
    {
        if(ac%ar[i]==0 && ce%ar[i]==0)
        {
            if(binary_search(ar,ar+6, ac/ar[i]) && binary_search(ar,ar+6, ce/ar[i]))
            {
                c = ar[i];
                a = ac/c;
                e = ce/c;
                break;
            }
        }
    }
    b = bc / c ;
    d = cd / c ;


    for(int i=0 ; i<6 ; i++)
    {
        if(ar[i]==a||ar[i]==b||ar[i]==c||ar[i]==d||ar[i]==e)
            continue ;
        f = ar[i] ;
        break ;
    }

    printf("! %d %d %d %d %d %d\n",a,b,c,d,e,f) ;

    return 0 ;

}
