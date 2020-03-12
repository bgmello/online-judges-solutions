#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;


typedef long long ll;
const int N=1e5+5;

int main(){

  int a,b,c,soma=0;
  a=1;
  b=2;
  c=3;
  soma+=2;
  while(c<=4000000){
    int r=b+c;
    a=b;
    b=c;
    c=r;
    if(c%2==0)soma+=c;
  }

  cout << soma << endl;

  return 0;
}

