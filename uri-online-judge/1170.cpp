#include <bits/stdc++.h>
using namespace std;

int resp(int n){
  int i=1, itr=0;
  while(i<n){
    itr++;
    i*=2;
  }
  return itr;
}

int main(){
  int n;
  cin >> n;
  while(n--){
    int c;
    cin >> c;
    cout << resp(c) << " dias" << endl;
  }
  return 0;
}
