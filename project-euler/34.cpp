#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int f[10];

int fact(int n){
    return n==0 ? 1 : fact(n-1)*n;
}

vector<int> split_num(int num){
    vector<int> ans;
    while(num!=0){
        ans.pb(num%10);
        num = num/10;
    }

    return ans;
}

bool is_equal(int num){
    vector<int> digits = split_num(num);

    if(num<10)return false;

    for(auto a: digits){
        num -= f[a];
    }

    return num==0;
}

int main(){

    for(int i=0;i<=9;i++)f[i]=fact(i);
    int ans = 0;
    for(int i=1;i<100000000;i++){
        if(is_equal(i))ans+=i;
    }
    cout << ans << endl;
    return 0;
}
