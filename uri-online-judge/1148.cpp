#include <bits/stdc++.h>
#define f(i,n) for(int i=1;i<=n;i++)
#define INF (int)1e7
using namespace std;

const int N = (int)5e2+5;
int dist[N][N];
int n,m;

int main(){
  while(cin >> n >> m && n!=0){
    f(i,n){
      f(j,n){
        dist[i][j]=INF;
      }
    }
    f(i,m){
      int a,b,c;
      cin >> a >> b >> c;
      if(dist[b][a]!=INF){
        dist[b][a] = 0;
        dist[a][b] = 0;
      }
      else{
        dist[a][b]=c;
      }
    }
    f(k,n){
      f(j,n){
        f(i,n){
          dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
        }
      }
    }
    int q;
    cin >> q;
    while(q--){
      int a,b;
      cin >> a >> b;
      if(dist[a][b]==INF)cout << "Nao e possivel entregar a carta" << endl;
      else cout << dist[a][b] << endl;
    }
    cout << endl;
  }
  return 0;
}

