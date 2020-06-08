#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int n, p;
vector<tuple<ll,ll,ll>> points;

pair<ll, ll> dist(pair<ll,ll> s, pair<ll,ll> d){
  return {d.F-s.F, d.S-s.S};
}

ll prodvect(pair<ll,ll> a, pair<ll,ll> b){
  return a.F*b.S-a.S*b.F;
}

bool comp(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b){
  pair<ll,ll> coordA = {get<0>(a), get<1>(a)};
  pair<ll,ll> coordB = {get<0>(b), get<1>(b)};

  return prodvect(coordA, coordB)>0;
}

int main(){

  cin >> n;
  for(int i=1;i<=n;i++){
    ll x,y,g;
    cin >> x >> y >> g;
    points.pb({x,y,g});
  }

  ll ans = LONG_LONG_MAX;
  for(p=0;p<n;p++){
    vector<tuple<ll,ll,ll>>  ordered;
    pair<ll,ll> coordP = {get<0>(points[p]), get<1>(points[p])};

    for(int i=0;i<n;i++){
      if(i==p)continue;
      pair<ll,ll> coordA = {get<0>(points[i]), get<1>(points[i])};
      coordA = dist(coordP, coordA);      
      tuple<ll,ll,ll> point = {get<0>(coordA), get<1>(coordA), get<2>(points[i])};
      if(coordA.S<0)point = {-get<0>(point), -get<1>(point), -get<2>(point)};
      ordered.pb(point);
    }
    
    sort(ordered.begin(), ordered.end(), comp);

    ll tmp = 0;
    for(int i=0;i<n-1;i++)tmp+=get<2>(ordered[i]);

    for(int i=0;i<n-1;i++){
      if(i==0)tmp-=get<2>(ordered[0]);
      else tmp-=(get<2>(ordered[i])+get<2>(ordered[i-1]));
      ans = min(ans, abs(tmp));
    }
  }
  cout << ans << endl;
  return 0;
}

