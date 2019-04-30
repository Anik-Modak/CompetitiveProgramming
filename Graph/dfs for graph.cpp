#include <cstdio>
#include <vector>
using namespace std;

#define MAX 10
#define DFS_BLACK 1
#define DFS_WHITE -1
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;
vector<vii> adj(MAX);

void dfs(int u) {
    dfs_num[u] = DFS_BLACK;
    for (int i = 0; i < (int)adj[u].size(); i++) {
        ii v = adj[u][i];
        if (dfs_num[v.first] == DFS_WHITE)
            dfs(v.first);
    }
    printf(" %d", u);
}

int main() {
    int v, e, x, y;

    scanf("%d %d", &v, &e);
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &x, &y);
        adj[x].push_back(ii(y, 1));
        adj[y].push_back(ii(x, 1));
    }

    int numCC = 0;
    dfs_num.assign(v, DFS_WHITE);
    for (int i = 0; i < v; i++)
        if (dfs_num[i] == DFS_WHITE)
            printf("Component %d:", ++numCC), dfs(i), printf("\n");
    printf("There are %d connected components\n", numCC);
}
