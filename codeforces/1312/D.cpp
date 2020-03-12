#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

ll power(ll x, ll y, ll p) 
{
  int res=1;

  x = x%p;

  while(y){
    if(y&1)
      res = (res*x)%p;
    
    y = y>>1;
    x = (x*x)%p;
  }
  return res;
} 
  
ll modInverse(ll n,ll p) 
{ 
    return power(n, p-2, p); 
} 
  
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 
  
    ll fac[n+1]; 
    fac[0] = 1; 
    for (int i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 


int main(){

  int n,m;
  if(n==2){
    cout << m << endl;
    return 0;
  }
  cin >> n >> m;
  ll tot=0, mod=998244353, binomial=-1;
  for(int i=max((n+1)/2, n-3);i<=m;i++){
    if(binomial==-1){
      binomial = nCrModPFermat(i-1, n-3, mod);
    }
    else{
      binomial = (((binomial*i%mod)%mod)*modInverse(i-n+3, mod))%mod;
    }
    tot = (tot+((i-1)*binomial)%mod)%mod;
  }

  cout << tot << endl;
  return 0;
}

