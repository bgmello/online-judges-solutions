#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

ll power(int a, int p){
    return p==0 ? 1 : power(a, p-1)*a;
}

ll getSum(ll x){

    ll sum = 0;
    while(x!=0){
        sum+=power(x%10, 5);
        x/=10;
    }

    return sum;
}

int main(){

    ll ans = 0;
    for(int i=2;i<1000000;i++){
        if(i==getSum(i))ans+=i;
    }

    cout << ans << endl;
    return 0;
}

