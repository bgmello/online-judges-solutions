#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int arrToN(vector<int> v){
    vector<int>::reverse_iterator it;
    int exp = 1, ans=0;
    for(it=v.rbegin();it!=v.rend();it++){
        ans += exp*(*it);
        exp*=10;
    }
    return ans;
}

vector<int> generatePandigit(int n){
    vector<int> ans;
    vector<int> v;
    for(int i=1;i<=n;i++)v.pb(i);
    do{
    
        ans.pb(arrToN(v));

    }while(next_permutation(v.begin(), v.end()));
    return ans;
}

bool isPrime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){

    int max_ = 0;
    for(int i=1;i<=9;i++){
        vector<int> pandigits = generatePandigit(i);
        for(auto a: pandigits){
            if(isPrime(a) and a>max_)max_=a;
        }
    }
    cout << max_ << endl;
    return 0;
}

