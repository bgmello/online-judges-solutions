#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

ll sumDiv(ll a){
  ll ans=1;
  for(ll i=2;i*i<=a;i++){
    if(a%i==0)ans += i*i==a ? i : (i+a/i);
  }
  return ans;
}

bool amicable(ll a,ll b){
  return (sumDiv(a)==b and sumDiv(b)==a);
}
int main(){

  ll ans=0;
  for(ll i=1;i<10000;i++){
    for(ll j=i+1;j<10000;j++){
      ans+= amicable(i,j) ? i+j : 0;
    }
  }
  
  cout << ans << endl;
  return 0;
}

