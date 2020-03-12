#include <bits/stdc++.h>

#define N (int)1e4+5

using namespace std;

priority_queue<pair<int,int>> pq;
vector<int> adj[2*N], adjw[2*N];
int c,v, dist[2*N];

void dijkstra(int s){
  for(int i=1;i<2*N;i++)dist[i]=0x3f3f3f3f;
  dist[s]=0;
  pq.push(make_pair(dist[s],s));
  while(!pq.empty()){
    int a = pq.top().second;
    pq.pop();
    for(int i=0;i<adj[a].size();i++){
      int x = adj[a][i];
      if(dist[x] > dist[a]+adjw[a][i]){
        dist[x] = dist[a]+adjw[a][i];
        pq.push(make_pair(-dist[x], x));
      }
    }
  }
}

int main(){

  cin >> c >> v;
  for(int i=1;i<=v;i++){
    int c1,c2,g;
    cin >> c1 >> c2 >> g;
    adj[c1].push_back(c2+c);
    adj[c2].push_back(c1+c);
    adj[c1+c].push_back(c2);
    adj[c2+c].push_back(c1);
    adjw[c1].push_back(g);
    adjw[c2].push_back(g);
    adjw[c1+c].push_back(g);
    adjw[c2+c].push_back(g);
  }
  dijkstra(c+1);
  if(dist[2*c]!=0x3f3f3f3f)cout << dist[2*c] << endl;
  else cout << -1 << endl;
  return 0;
}

