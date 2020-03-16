#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

bool comp(int a, int b){
  return a>b;
}

int main(){

  int n;
  cin >> n;
  vector<int> a,b,c;
  f(i,n){
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  f(i,n){
    int bi;
    cin >> bi;
    b.push_back(bi);
  }

  f(i,n){
    c.push_back(a[i]-b[i]);
  }

  ll tot=0;

  sort(c.begin(), c.end());

  f(i,n){

    vector<int> :: iterator up = upper_bound(c.begin(), c.end(), -c[i]);
    tot+=(c.end()-up);
    if(c[i]>0){
      tot--; 
    }
  }

  cout << tot/2 << endl;
  return 0;
}

