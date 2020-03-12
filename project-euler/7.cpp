#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

bool isPrime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}

int main(){
  int tot=0,i=2;
  while(tot!=10001){
    if(isPrime(i))tot++;
    i++;
  }
  cout << i-1 << endl;
  return 0;
}

