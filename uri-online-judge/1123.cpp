#include <bits/stdc++.h>

#define N 300

using namespace std;

int dist[N][N];

int main(){
  int n,m,c,k;
  while(cin >> n >> m >> c >> k && n!=0){
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        dist[i][j]=0x3f3f3f3f;

    for(int i=0;i<n;i++)dist[i][i]=0;
    for(int i=1;i<=m;i++){
      int u,v,p;
      cin >> u >> v >> p;
      if(u>=c)dist[u][v]=p;
      if(v>=c)dist[v][u]=p;
      if(abs(u-v)==1 && u<c && v<c){
        dist[u][v]=p;
        dist[v][u]=p;
      }
    }

    for(int r=0;r<n;r++){
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          dist[i][j] = min(dist[i][j], dist[i][r]+dist[r][j]);
        }
      }
    }
    cout << dist[k][c-1] << endl;
  }
  return 0;
}
