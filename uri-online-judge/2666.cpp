#include <bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int pa[N],distpa[N],vis[N],e[N];
long long tot=0;
int n,c;
vector<int> adj[N],adjw[N];
int dfs(int s){
        if(vis[s])return e[s];
        vis[s]=1;
        for (int i=0;i<adj[s].size();i++){
                int u=adj[s][i];
                int w=adjw[s][i];
                if(pa[s]==u)continue;
                pa[u]=s;
                distpa[u]=w;
                e[s]+=dfs(u);
        }
        return e[s];
}


int main(){
        memset(pa,0,sizeof pa);
        scanf("%d %d", &n, &c);
        for (int i=1;i<=n;i++){
                scanf("%d", &e[i]);
        }
        for (int i=1;i<n;i++){
                int u,v,w;
                scanf("%d %d %d", &u, &v, &w);
                adj[u].push_back(v);
                adj[v].push_back(u);
                adjw[u].push_back(w);
                adjw[v].push_back(w);
        }
        dfs(1);
        for (int i=1;i<=n;i++){
                tot+=distpa[i]*((e[i]+c-1)/c);
        }
          printf("%lld\n", 2*tot);
        return 0;
}
