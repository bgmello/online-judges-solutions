#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

bool isPrime(int n)
{
    if(n<=1)return false;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }

    return true;
}

int numConsecutives(int a, int b){
    int n=0;

    while(isPrime(n*n+a*n+b)){
        n++;
    }

    return n;
}

int main(){

    
    vector<int> possibleB;

    for(int i=1;i<=1000;i++){
        
        if(isPrime(i)){
            possibleB.pb(i);
            possibleB.pb(-i);
        }

    }

    int max_ = -1, max_a = 0, max_b = 0;

    for(auto b: possibleB){
        for(int a=-999;a<1000;a++){
            int ans = numConsecutives(a, b);
            if(ans>max_){
                max_a = a;
                max_b = b;
                max_ = ans;
            }
        }
    }

    cout << max_a*max_b << endl;
    
    return 0;
}

