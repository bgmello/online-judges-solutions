#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e4+5;

int main(){
  int n;
  while(cin >> n && n!=0){
    int v[N];
    int tot = 0;
    for(int i=0;i<n;i++){
      cin >> v[i];
    }
    for(int i=0;i<n;i++){
      if(v[i]>v[(i+1)%n] && v[i]>v[(i-1+n)%n])tot++;
      if(v[i]<v[(i+1)%n] && v[i]<v[(i-1+n)%n])tot++;
    }
    cout << tot << endl;
  }
  return 0;
}
