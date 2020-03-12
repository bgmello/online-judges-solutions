#include<bits/stdc++.h>
#define pb push_back

using namespace std;

vector<int> v;

int main(){
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int a;
    cin >> a;
    v.pb(a);
  }
  sort(v.begin(), v.end());
  vector<int> :: iterator it1=v.begin(), it2=v.begin();
  int ans = 0;
  while(it2!=v.end()){
    if(*it2-*it1<=5){
      ans = max(ans, (int)(it2-it1)+1);
      it2++;
    }
    else{
      it1++;
    }
  }
  cout << ans << endl;
  return 0;
}

