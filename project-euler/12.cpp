#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int numdiv(int n){
  int tot=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      tot+=i*i!=n;
      tot++;
    }
  }
  return tot;
}

int main(){

  int tri=1, itr=2;
  while(numdiv(tri)<500){
    tri+=itr++;
  }
  cout << tri << endl;
  return 0;
}

