#include<bits/stdc++.h>
#define K 45

typedef long long ll;
using namespace std;

int p[K];

int main(){

  int n,k;
  cin >> n >> k;
  ll mask=0, end=(1<<k), soma=0;
  for(int i=0;i<k;i++)cin >> p[i];
  while(mask!=end){
    int qnt=0, mul=1;
    for(int i=0;i<k;i++){
      if((mask&(1<<i))!=0){
        qnt++;
        mul*=p[i];
      }
    }
    mask++;
    if(qnt==0)continue;
    if(qnt%2)soma+=(n/mul);
    else soma-=(n/mul);
  }
  cout << n-soma << endl;
  return 0;
}
