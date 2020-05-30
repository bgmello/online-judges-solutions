#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

void solve(){
    int n,m;
    cin >> n >> m;
    if((n*m)%2==0)cout << n*m/2 << endl;
    else cout << n*m/2+1 << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

