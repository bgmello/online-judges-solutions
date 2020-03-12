#include <bits/stdc++.h>

#define N (int)2e5+5

typedef long long ll;

using namespace std;

ll f[100];

ll factorial(int x){
  if(f[x]!=-1)return f[x];
  if(x<2)return f[x]=1;
  return f[x]=x*factorial(x-1);
}

int main(){
  
  int n,m;
  for(int i=0;i<21;i++)f[i]=-1;
  f[0]=1;
  factorial(20);
  while(cin >> n >> m){
    cout << f[n]+f[m] << endl;
  }

  return 0;
}
