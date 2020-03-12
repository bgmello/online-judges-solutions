#include<bits/stdc++.h>

using namespace std;

bool isPrime(int x){
  if(x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int x;
    cin >> x;
    isPrime(x) ? cout << "Prime" << endl : cout << "Not Prime" << endl;
  }
  return 0;
}
