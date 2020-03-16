#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=2e3+5;

int n,h,l,r;
vector<int> v;

int solve(int t, int i, int l, int r){
  if(i==n)return 0;
 
  int a = (t+v[i])%h;
  return max(solve(a, i+1, l, r)+(t>=l and t<=r), solve((a-1+h)%h, i+1, l, r)+(t>=l and t<=r));
}


int main(){
  cin >> n >> h >> l >> r;
  f(i,n){
    int a;
    cin >> a;
    v.push_back(a);
  }

  cout << solve(0, 0, l, r) << endl;
  return 0;
}

