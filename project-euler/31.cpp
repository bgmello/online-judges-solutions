#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

vector<int> coins = {1, 2, 5 , 10, 20, 50, 100, 200};

int numWays(int x){

    vector<int> dp(x+1);

    dp[0]=1;
    for(auto c: coins){
        for(int i=1;i<=x;i++){
            if(c<=i){
                dp[i] += dp[i-c];
            }
        }
    }

    return dp[x];
}

int main(){

    cout << numWays(200) << endl;
return 0;
}

