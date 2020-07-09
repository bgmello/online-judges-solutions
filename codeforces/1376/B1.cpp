#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;

int main(){
  srand(time(NULL));
  int n,m;
  cin >> n >> m;
  vector<int> ans(n,0);
  vector<int> adj[n+1];
  set<int> V;
  for(int i=1;i<=n;i++)V.insert(i);
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  while(not V.empty()){
    vector<double> r(n, 1);
    for(auto v: V)r[v] = (double)rand() / ((double)RAND_MAX + 1);
    for(int v=1;v<=n;v++){
      if(V.find(v)==V.end())continue;
      bool is_smaller = true;
      for(auto a: adj[v]){
        if(V.find(a)!=V.end() and r[v]>r[a])is_smaller=false;
      }
      if(is_smaller){
        V.erase(v);
        ans[v] = 1;
        for(auto a: adj[v]){
          if(V.find(a)!=V.end())V.erase(a);
        }
      }
    }
  }

  for(auto a: ans)cout << a << " ";
  cout << endl;
  return 0;
}

