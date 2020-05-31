#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e3+5;

int n, x;

void solve(){
  cin >> n >> x;
 
  int adjx = 0;

  for(int i=1;i<n;i++){
    int a,b;
    cin >> a >> b;
    if(x==a or x==b)adjx++;
  }
  if(adjx<=1){
    cout << "Ayush" << endl;
    return;
  }
  if((n-3)%2==0){
    cout << "Ashish" << endl;
  }
  else{
    cout << "Ayush" << endl;
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

