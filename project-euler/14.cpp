#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

ll numelements(ll x){
  ll tot=0;
  while(x!=1){
    tot++;
    x = x%2 ? 3*x+1 : x/2; 
  }
  return tot;
}
int main(){

  int maxchain=-1, maxnum=-1;
  for(int i=1;i<=1000000;i++){
    if(maxchain<numelements(i)){
      maxnum=i;
      maxchain=numelements(i);
    }
  }

  cout << maxnum << endl;
  return 0;
}

