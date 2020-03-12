#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  while(getline(cin, s)){
    int tot=0;
    bool ok=false;
    for(auto c:s){
      if(c=='('){
        tot++;
      }
      if(c==')'){
        if(tot==0){
          ok=true;
          cout << "incorrect" << endl;
          break;
        }
        tot--;
      }
    }
    if(ok)continue;
    if(tot==0){
      cout << "correct" << endl;
    }
    else{
      cout << "incorrect" << endl;
    }
  }
  return 0;
}
