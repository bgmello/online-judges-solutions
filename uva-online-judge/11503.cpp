#include <bits/stdc++.h>

#define N (int)2e5+5


using namespace std;

int pai[N],peso[N], qtd[N];

int find(int x){
  return pai[x]==x ? x : pai[x]=find(pai[x]);
}

void join(int x,int y){
  x = find(x);
  y = find(y);
  if(x==y)return;
  if(peso[x]<peso[y])pai[x]=y, qtd[y]+=qtd[x];
  else if(peso[x]>peso[y])pai[y]=x, qtd[x]+=qtd[y];
  else{
    qtd[y]+=qtd[x];
    pai[x]=y;
    peso[y]++;
  }
}

int main(){

  int t;
  cin >> t;
  while(t--){
    for(int i=0;i<N;i++)pai[i]=i, qtd[i]=1,peso[i]=1;
    int itr = 0;
    map<string, int> names;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
      string s,t;
      cin >> s >> t;
      if(names.find(s)==names.end())names[s]=itr++;
      if(names.find(t)==names.end())names[t]=itr++;
      join(names[s], names[t]);
      cout << qtd[find(names[s])] << endl;
    }
  }

  return 0;
}

