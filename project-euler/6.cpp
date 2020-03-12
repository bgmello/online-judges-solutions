#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){
  
  ll sum1=0, sum2=0;
  for(int i=1;i<=100;i++)sum1+=i*i, sum2+=i;
  cout << sum2*sum2-sum1 << endl;
  return 0;
}

