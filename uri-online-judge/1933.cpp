#include <bits/stdc++.h>


using namespace std;


int main(){

  int a,b;
  cin >> a >> b;
  if(a==b){
    cout << b << endl;
    return 0;
  }
  cout << max(a,b) << endl;

  return 0;
}
