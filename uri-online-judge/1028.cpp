#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
  if(a<b)swap(a,b);
  while(b!=0){
  int r = a%b;
  int temp = a;
  a = b;
  b = r;
  } 
  return a;
}

int main(){
  int a;
  int n,m;
  cin >> a;
  while(a--){
    cin >> n >> m;
    cout << mdc(n,m) << endl;
  }

return 0;
}
