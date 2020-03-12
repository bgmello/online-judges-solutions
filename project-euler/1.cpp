#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int sum=0;
  for(int i=1;i<1000;i++){
    sum+=(i%3==0 or i%5==0)*i;
  }
  cout << sum << endl;
  return 0;
}

