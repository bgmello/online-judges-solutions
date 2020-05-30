#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=2e5+5;

int v[N];
int prefix[N];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v[a]++;
    }
    for(int i=1;i<N;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    int tot=0;
    int i; 
    for(i=1;i<N;i++){
        if(prefix[i]!=prefix[i-1] and prefix[i]>i)continue;
        break;
    }
    cout << i << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

