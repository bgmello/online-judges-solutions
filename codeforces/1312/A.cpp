#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){
  
  int t,n,m;

  cin >> t;
  while(t--){
    cin >> m >> n;

    if(m%n==0)cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}

