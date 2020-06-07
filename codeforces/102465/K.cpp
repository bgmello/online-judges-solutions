#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
 
using namespace std;
 
typedef long long ll;
const int N=1000;
 
int dp[N][N];
string s;
 
vector<int> divisors(int x){
  vector<int> v;
  for(int i=2;i<x;i++){
    if(x%i==0)v.pb(i);
  }
  return v;
}
 
int solve(int i, int j){
 
  if(dp[i][j]!=-1)return dp[i][j];
  if(i==j)return dp[i][j]=1;
  bool same=true;
  for(int r=i;r<=j;r++){
    if(s[i]!=s[r])same=false;
  }
  if(same)return dp[i][j]=1;
  int ans = INT_MAX;
  vector<int> divs = divisors((j-i+1));
  for(auto d: divs){
    bool div=true;
    for(int r=i;r<=(j-i+1)/d+i-1;r++){
      bool same=true;
      for(int off=0;off<d;off++){
        if(s[r]!=s[r+off*(j-i+1)/d])same=false;
      }
      div = div & same;
    }
    if(div)ans = min(ans, solve(i, i+(j-i+1)/d-1)); 
  }
  for(int r=i;r<j;r++){
    ans = min(ans, solve(i, r)+solve(r+1, j));
  }
  return dp[i][j]=ans;
}
 
int main(){
 
  int n;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      dp[i][j]=-1;
    }
  }
  cin >> n;
  cin >> s;
  cout << solve(0, n-1) << endl;
  return 0;
}
