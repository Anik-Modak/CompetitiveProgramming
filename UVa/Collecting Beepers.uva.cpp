//Anik_Modak
#include<iostream>
#include<stdio.h>

int dist[MX][MX];
void init(int V)
{
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            if(i==j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
        }
    }
}

double floydWarshall(int n)
{
    for (int k = 1; k <= n; ++k)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

    }
}
