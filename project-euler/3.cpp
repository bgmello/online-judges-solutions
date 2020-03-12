#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){
  
  ll n=600851475143;
  vector<int> v;
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      v.push_back(i);
      n/=i;
    }
  }
  cout << n << endl;
  return 0;
}

