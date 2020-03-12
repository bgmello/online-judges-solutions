#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

const int N = (int)1e4+5;

int n,m;

bool comp(int a, int b){
  if(a%m<b%m)return 1;
  if(a%m>b%m)return 0;
  if(a%2!=0 && b%2==0)return 1;
  if(a%2==0 && b%2!=0)return 0;
  if(a%2!=0 && b%2!=0)return a>b;
  return a<b;
}

int main(){
  while(cin >> n >> m && n!=0){
    vector<int> v;
    f(i,n){
      int a;
      cin >> a;
      v.pb(a);
    }
    sort(v.begin(), v.end(), comp);
    cout << n << " " << m << endl;
    f(i,n){
      cout << v[i] << endl;
    }
  }
  cout << 0 << " " << 0 << endl;
  return 0;
}
