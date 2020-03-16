#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int t, case_=0;
  cin >> t;
  while(t--){
    case_++;
    string n, a, b;
    bool bIsZero=1;
    cin >> n;
    for(int i=0;i<n.size();i++){
      if(n[i]=='4'){
        a+='2';
        b+='2';
        bIsZero=0;
      }
      else{
        if(!bIsZero)b+='0';
        a+=n[i];
      }
    }
    cout << "Case #" << case_ << ": " << a << " " << b << endl;
  }
  return 0;
}

