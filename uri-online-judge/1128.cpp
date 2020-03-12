#include <bits/stdc++.h>

#define N (int)2e4+5

using namespace std;

vector<int> adj[N];
int vis[N];
void dfs(int x){
  if(vis[x])return;
  vis[x]=1;
  for(auto a:adj[x])dfs(a);
}

int main(){

  int n,m;
  while(cin >> n >> m and n!=0){
    for(int i=1;i<=n;i++)vis[i]=0,adj[i].clear();
    for(int i=1;i<=m;i++){
      int v,w,p;
      cin >> v >> w >> p;
      adj[v].push_back(w);
      if(p==2)adj[w].push_back(v);
    }
    int resp=1;
    for(int i=1;i<=n;i++){
      for (int i=1;i<=n;i++)vis[i]=0;
      dfs(i);
      for(int j=1;j<=n;j++)if(vis[j]==0)resp=0;
    }
    cout << resp << endl;
  }

  return 0;
}

