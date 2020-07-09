#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=3e5+5;

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> max_;
  vector<int> min_;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i!=0)min_.pb(min(*min_.rbegin(), a[i]));
    else min_.pb(a[i]);
  }

  for(int j=n-1;j>=0;j--){
    if(j!=n-1)max_.pb(max(*max_.rbegin(), a[j]));
    else max_.pb(a[j]);
  }
  bool ok = true;
  for(int i=0;i<n;i++){
    if(a[i]>=max_[i] and a[i]<=min_[i])ok=false;
  }
  if(ok)cout << "YES";
  else cout << "NO";
  cout << endl;
  

}
int main(){
  int t;
  cin >> t;
  while(t--)solve();

  return 0;
}

