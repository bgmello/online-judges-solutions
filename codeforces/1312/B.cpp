#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=1;i<=n;i++){
      int a;
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=n-1;i>=0;i--){
      cout << v[i] << " \n"[i==0];
    }
  }
  return 0;
}

