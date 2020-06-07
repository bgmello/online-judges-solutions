#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int unfair(ll i, ll j){
  ll k = i^j;
  int count = 0;
  while(k){
    count += k&1;
    k>>=1;
  }
  return count;
}

ll solve(ll x){
  if(x==1)return 1;
  return x%2==0 ? solve(x/2)*2+2 : solve(x-1)+unfair(x, x-1);
}

int main(){

  int t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    cout << solve(n) << endl;
  }
  return 0;
}

