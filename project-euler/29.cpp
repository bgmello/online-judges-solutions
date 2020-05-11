#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int isPower(int a, int x){
    int p = 1, tmp=a;
    while(tmp<x){
        tmp*=a;
        p++;
    }
    if(tmp==x)return p;
    return -1;
}

pair<int,int> powerPrime(int x){
    for(int i=2;i*i<=x;i++){
        if(isPower(i, x)!=-1){
            return make_pair(i, isPower(i, x));
        }
    }
    return make_pair(x, 1);
}

int main(){

    set<pair<int,int>> powers;

    for(int i=2;i<=100;i++){
        for(int j=2;j<=100;j++){
            pair<int,int> ans = powerPrime(i);
            ans.S *= j;
            powers.insert(ans);
        }
    }

    cout << powers.size() << endl;
    return 0;
}

