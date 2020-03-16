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
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << "Case #" << case_ << ": ";
    for(int i=0;i<s.size();i++){
      if(s[i]=='E')cout << 'S';
      else cout << 'E';
    }
    cout << endl;
  }
  return 0;
}

