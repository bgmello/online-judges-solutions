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
  int a;
  bool sign = 1;
  for(int i=0;i<n;i++){
    cin >> a;
    if(a>=0 and sign)cout << a;
    else if(a<=0 and not sign)cout << a;
    else cout << -a;
    cout << " ";
    sign = not sign;
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }

  return 0;
}

