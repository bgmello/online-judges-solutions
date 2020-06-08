#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  ll x, y, n;
  cin >> x >> y;
  cin >> n;
  vector<ll> min_y(y), max_y(y);
  vector<ll> max_x(x), min_x(x);
  for(int i=0;i<y;i++)min_y[i]=0, max_y[i]=0;
  for(int i=0;i<x;i++)max_x[i]=-1, min_x[i]=y;

  for(int i=1;i<=n;i++){
    pair<ll, ll> tmp;
    cin >> tmp.F >> tmp.S;
    max_x[tmp.F] = max(max_x[tmp.F], tmp.S);
    min_x[tmp.F] = min(min_x[tmp.F], tmp.S);
  }

  ll num_lines = 0;
  for(int i=0;i<x;i++)num_lines += max_x[i]!=-1;
  for(int i=0;i<x;i++){
    if(max_x[i]!=-1){
      max_y[max_x[i]]++;
    }
    if(min_x[i]!=y){
      min_y[min_x[i]]++;
    }
  }

  ll ans = LONG_LONG_MAX, ant=-1;
  ll num_maxs=num_lines, num_mins=num_lines;
  for(int i=0;i<y;i++){
    ll tmp;
    if(i==0){
      tmp = 0;
      for(int i=0;i<x;i++)tmp+=(max_x[i]!=-1 ? 2*max_x[i] : 0);
    }
    else{
      tmp = ant+2*(num_lines-num_maxs-num_mins); 
    }
    ans = min(tmp, ans);
    ant = tmp;
    num_maxs-=max_y[i];
    num_mins-=min_y[i];
  }
  cout << ans+x-1 << endl;
  return 0;
}

