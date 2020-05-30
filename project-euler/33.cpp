#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int mdc(int a,int b){

    if(a<b)swap(a,b);
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }

    return a;
}

bool is_non_trivial(int n, int d){
    if(int(n/10)==d%10){
        return (n%10)*d==int(d/10)*n;
    }
    if(int(d/10)==n%10){
        return (d%10)*n==int(n/10)*d;
    }
    return false;
}

int main(){


    int num_f=1, den_f=1;

    for(int num=10;num<100;num++){
        for(int den=num+1;den<100;den++){
            if(is_non_trivial(num, den)){
                num_f *= num;
                den_f *= den;
            }
        }
    }
    cout << den_f/mdc(num_f, den_f) << endl;
    return 0;
}

