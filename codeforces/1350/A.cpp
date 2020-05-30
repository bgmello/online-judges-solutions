#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e7+5;

map<int,int> dp;

int func(int n){
    if(dp.find(n)!=dp.end())return dp[n];
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return dp[n]=i;
        }
    }
    return dp[n]=n;
}

void solve(){
    int n,k;
    cin >> n >> k;
    f(i,k){
        n = n+func(n);
    }

    cout << n << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

