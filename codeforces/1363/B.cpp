#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

void solve(){
  string s;
  cin >> s;
  vector<int> prefix0, prefix1;
  prefix0.pb(0);
  prefix1.pb(0);
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      prefix0.pb(*prefix0.rbegin()+1);
      prefix1.pb(*prefix1.rbegin());
    }
    if(s[i]=='1'){
      prefix0.pb(*prefix0.rbegin());
      prefix1.pb(*prefix1.rbegin()+1);
    }
  }
  int min_ = INT_MAX;
  for(int i=0;i<prefix0.size();i++){
    int ans = min(prefix0[i]+*prefix1.rbegin()-prefix1[i], prefix1[i]+*prefix0.rbegin()-prefix0[i]);
    min_ = min(ans, min_);
  }
  cout << min_ << endl;
}

int main(){
  
  int t;
  cin >> t;
  while(t--){
    solve();
  }

  return 0;
}

