#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

bool isPrime(ll x){
  if(x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}

int main(){

  ll sum=0;

  for(int i=1;i<2000000;i++){
    if(isPrime(i))sum+=i;
  }
  cout << sum << endl;
  return 0;
}

