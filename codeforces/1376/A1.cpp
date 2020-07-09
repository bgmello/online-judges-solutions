#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin >> v[i];
  sort(v.begin(), v.end());
  for_each(v.begin(), v.end(), [](int x){cout << x << " ";});
  cout << endl;
  return 0;
}

