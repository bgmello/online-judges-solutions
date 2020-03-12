#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=45;

ll dp[N][N];

ll binomialCoeff(ll n, ll k){
  if(dp[n][k]!=-1)return dp[n][k];
  if(k==0 or k==n)return dp[n][k]=1;
  return dp[n][k]=binomialCoeff(n-1, k-1)+binomialCoeff(n-1,k);
}

int main(){
  
  memset(dp, -1, N*N*sizeof(ll));
  cout << binomialCoeff(40,20) << endl;
  return 0;
}

