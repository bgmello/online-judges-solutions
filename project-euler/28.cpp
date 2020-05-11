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

    ll sum = 1;

    for(int i=2;i<=501;i++){
        sum += (4*(2*i-1)*(2*i-1)-6*(2*i-2));
    }

    cout << sum << endl;

    return 0;
}

