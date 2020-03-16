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
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int pair0=0, pair1=0;
    for(int i=1;i<=n;i++){
      int a;
      cin >> a;
      if(a%2==0)pair0++;
      else pair1++;
    }

    if (pair1!=0 and pair0!=0)cout << "NO"<< endl;
    else cout << "YES" << endl;
  }
  
  return 0;
}

