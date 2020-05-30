#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

bool isPrime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

vector<int> splitNum(int n){
    vector<int> a;
    while(n!=0){
        a.pb(n%10);
        n/=10;
    }
    vector<int> b;
    for(int i=a.size()-1;i>=0;i--)b.pb(a[i]);
    return b;
}

int joinNum(vector<int> v){
    int ans = 0, exp=1;
    for(int i=v.size()-1;i>=0;i--){
        ans += v[i]*exp;
        exp*=10;
    }
    return ans;
}

set<int> generateRotations(int n){
    vector<int> digits = splitNum(n);
    set<int> ans;
    while(true){
    
        if(ans.find(joinNum(digits))!=ans.end())break;
        ans.insert(joinNum(digits));

        int tmp = *digits.begin();
        digits.erase(digits.begin());
        digits.pb(tmp);
    
    }
    return ans;
}

bool circularPrime(int n){
   
    for(auto a: generateRotations(n)){
        if(not isPrime(a)){
            return false;
        }
    }
    return true;
}

int main(){

    int tot = 0;
    for(int i=1;i<1000000;i++){
        tot+=circularPrime(i);
    }
    cout << tot << endl;
    return 0;
}

