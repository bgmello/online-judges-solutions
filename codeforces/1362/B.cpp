#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

void solve(){

  int n;
  cin >> n;
  set<int> v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.insert(a);
  }
  set<int>::iterator it;
  for(int k=1;k<1024;k++){
    set<int> tmp = v;
    for(it=v.begin();it!=v.end();it++){
      tmp.erase(*it^k); 
    }
    if(tmp.empty()){
      cout << k << endl;
      return;
    }
  }
  cout << -1 << endl;
  return;
}

int main(){

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

