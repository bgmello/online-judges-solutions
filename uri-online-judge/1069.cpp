#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    int tot=0, ans=0;
    for(auto c:s){
      if(c=='<')tot++;
      else if(c=='>'){
        if(tot>0){
          tot--;
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
