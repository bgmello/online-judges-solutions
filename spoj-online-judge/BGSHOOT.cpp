#include <bits/stdc++.h>
#define N (int)1e5+5

using namespace std;

int st[4*N], v[N];

void build(int n, int l, int r){
  if(l==r){
    st[n]=v[l];
    return;
  }
  build(2*n, l, (l+r)/2);
  build(2*n+1, (l+r)/2+1, r);
  st[n]=max(st[2*n],st[2*n+1]);
}

int query(int n, int l, int r, int i, int j){
  if(j<l || i>r)return 0;
  if(i<=l && r<=j)return st[n];
  return max(query(2*n, l, (l+r)/2, i, j), query(2*n+1, (l+r)/2+1, r, i, j));
}

int main(){
  ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
  int n, q;
  map<int,int> Mp;
  set<int> values;
  vector<pair<int,int>> animais, queries;
  int itr=0;
  cin >> n;
  for (int i=1;i<=n;i++){
    int x,y;
    cin >> x >> y;
    animais.push_back({x,y});
    values.insert(x);
    values.insert(y);
  }
  cin >> q;
  for (int i=1;i<=q;i++){
    int l,r;
    cin >> l >> r;
    values.insert(l);
    values.insert(r);
    queries.push_back({l,r});
  }
  set<int>::iterator it=values.begin();
  while(it!=values.end()){
    Mp[*it]=itr++;
    it++;
  }
  for(auto p: animais){
    v[Mp[p.first]]++;
    v[Mp[p.second]+1]--;
  }
  for(int i=0;i<itr;i++){
    v[i]+=v[i-1];
  }
  build(1, 0, itr-1);
  for(pair<int,int> q: queries){
    int a = Mp[q.first];
    int b = Mp[q.second];
    cout << query(1, 0, itr-1, a, b) << endl;
  }
  return 0;
}

