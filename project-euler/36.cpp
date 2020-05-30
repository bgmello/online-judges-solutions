#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

vector<int> decimalToBinary(ll a){
    vector<int> ans, ans1;
    while(a!=0){
        ans.pb(a%2);
        a /= 2;
    }
    for(int i=ans.size()-1;i>=0;i--){
        ans1.pb(ans[i]);
    }
    return ans1;
}

vector<int> splitNum(ll n){
    vector<int> a,b;
    while(n!=0){
        a.pb(n%10);
        n/=10;
    }
    for(int i=a.size()-1;i>=0;i--){
        b.pb(a[i]);
    }
    return b;
}

bool isPalindrome(vector<int> x){
    for(int i=0;i<x.size();i++){
        if(x[i]!=x[x.size()-i-1])return false;
    }
    return true;
}

bool isPalindrome(int n){
    vector<int> x = splitNum(n);
    for(int i=0;i<x.size();i++){
        if(x[i]!=x[x.size()-i-1])return false;
    }
    return true;
}

int main(){

    int ans = 0;
    for(int i=1;i<1000000;i++){
        if(isPalindrome(i) and isPalindrome(decimalToBinary(i)))ans+=i;
    }

    cout << ans << endl;
    return 0;
}

