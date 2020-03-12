#include <bits/stdc++.h>

#define N (int)1000

using namespace std;

int v[N];

int main(){

  int j,r;
  cin >> j >> r;
  for(int i=1;i<=j;i++)v[i]=0;
  for(int i=1;i<=j*r;i++){
    int a;
    cin >> a;
    if(i%j==0){
      v[j]+=a;
    }
    else {
      v[i%j]+=a;
    }

  }
  int argmax=-1, maxp=-1;
  for (int i=1;i<=j;i++){
    if(maxp<=v[i]){
      maxp=v[i];
      argmax=i;
    }
  }
  cout << argmax << endl;
  return 0;
}
