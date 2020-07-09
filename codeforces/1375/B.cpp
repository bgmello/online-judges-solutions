#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

void solve(){
  int n,m;
  cin >> n >> m;
  int grid[n][m];
  bool ok=true;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> grid[i][j];
      if((j==0 and i==0) or (j==m-1 and i==n-1) or (j==0 and i==n-1) or (j==m-1 and i==0)){
        if(grid[i][j]>2){
          ok = false;
        }
      }
      else if(i==0 or j==0 or j==m-1 or i==n-1){
        if(grid[i][j]>3){
          ok = false;
        }
      }
      else if(grid[i][j]>4){
        ok = false;
      }
    }
  }
  if(not ok){
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if((j==0 and i==0) or (j==m-1 and i==n-1) or (j==0 and i==n-1) or (j==m-1 and i==0)){
        cout << 2 << " ";
      }
      else if(i==0 or j==0 or j==m-1 or i==n-1){
        cout << 3 << " ";
      }
      else{
        cout << 4 << " ";
      }
    }
    cout << endl;
  }


}

int main(){

  int t;
  cin >> t;
  while(t--)solve();

  return 0;
}

