#include <bits/stdc++.h>

#define N (int)2e5+5

using namespace std;


int dp[10][N], P[N];
int n,c;

int solve(int x, int has){
  if(dp[has][x]!=-INT_MAX)return dp[has][x];
  if(has==0 && x==1)return dp[has][x]=0;
  if(has==1 && x==1)return dp[has][x]=-c-P[1];
  if(has==0){
    return dp[has][x]=max(solve(x-1,1)+P[x], solve(x-1, 0));
  }
  else{ 
    return dp[has][x]= max(solve(x-1,1), solve(x,0)-c-P[x]);
  }
}

int main(){
  cin.tie(0), ios_base::sync_with_stdio(false);
  cin >> n >> c;
  for(int i=1;i<=n;i++)dp[0][i]=-INT_MAX,dp[1][i]=-INT_MAX;
  for(int i=1;i<=n;i++)cin >> P[i];
  cout << solve(n, 0) << endl;
  return 0;
}
