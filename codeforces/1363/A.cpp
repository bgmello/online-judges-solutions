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
  int n,x, p=0, imp=0;
  
  cin >> n >> x;
  f(i,n){
    int b;
    cin >> b;
    if(b%2==0){
      p++;
    }
    else{
      imp++;
    }
  }
  for(int a=0;a<=imp;a++){
    int b = x-a;
    if(b<0 or b>p)continue;
    if(a%2==1){
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
    return 0;
}

