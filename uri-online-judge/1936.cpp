#include <bits/stdc++.h>

#define N (int)2e5+5

typedef long long ll;

using namespace std;

ll dp[N];
ll factorials[N];

ll f(ll x){
  if(x<=1)return 1;
  return x*factorials[x-1];
}

ll solve(ll x){
  if(dp[x]!=-1)return dp[x];
  if(x==0)return dp[x]=0;
  if(x==1)return dp[x]=1;
  ll a = 1;
  ll resp = 0x3f3f3f3f3f;
  while(factorials[a]<=x){
    resp = min(solve(x-factorials[a]), resp);
    a++;
  }
  return dp[x]=resp+1;
}




int main(){
  
  ll n;
  cin >> n;
  for(int i=0;i<=n;i++)dp[i]=-1;
  for(int i=0;i<=9;i++){
    factorials[i]=f(i);
  }
  cout << solve(n) << endl;
  return 0;
}
