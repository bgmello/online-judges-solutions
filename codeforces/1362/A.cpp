#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
typedef long long ll;
const int N=1e5+5;
 
void solve(){
  ll a,b, c;
  cin >> a >> b;
  if(b>a)swap(a,b);
  if(b==a){
    cout << "0" << endl;
  }
  else{
    int num_times = 0;
    ll c=b;
    while(c<a){
      c *=2;
      num_times++;
    }
    if(c!=a){
      cout << "-1" << endl;
    }
    else{
      int ans = num_times/3;
      if(num_times%3!=0)ans++;
      cout << ans << endl;
    }
  }
}
 
int main(){
 
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
 
