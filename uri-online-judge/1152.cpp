#include <bits/stdc++.h>

#define N (int)2e5+5

using namespace std;


struct aresta{
  int dist;
  int x,y;
};

vector<aresta> grafo;
int pai[N], peso[N];

bool comp(aresta a, aresta b){
  return a.dist < b.dist;
}

int find(int x){
  return pai[x]==x ? x : pai[x]=find(pai[x]);
}

void join(int x, int y){
  x = find(x);
  y = find(y);
  if(x==y)return;
  if(peso[x]<peso[y])pai[x]=y;
  else if(peso[y]>peso[x])pai[y]=x;
  else{
    pai[x]=y;
    peso[y]++;
  }
}


int main(){

  int n,m;
  while(cin >> n >> m && n!=0){
    int tot=0;
    for(int i=0;i<=n;i++)pai[i]=i, peso[i]=i;
    grafo.clear();
    for(int i=1;i<=m;i++){
      aresta a;
      cin >> a.x >> a.y >> a.dist;
      grafo.push_back(a);
    }
    sort(grafo.begin(), grafo.end(), comp);
    for (aresta a:grafo){
      if(find(a.x)!=find(a.y)){
        join(a.x,a.y);
      }
      else{
        tot+=a.dist;
      }
    }
    cout << tot << endl;
  }
  return 0;
}
