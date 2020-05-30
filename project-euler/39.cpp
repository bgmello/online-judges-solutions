#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int numSolutions(int p){
    int ans = 0;
    for(int a=1;a<p;a++){
        for(int b=a;b<p;b++){
            if((p-a-b)*(p-a-b)==a*a+b*b)ans++;
        }
    }
    return ans;
}

int main(){

    int p_max = -1;
    int m = -1;
    for(int p=1;p<=1000;p++){
        int n = numSolutions(p);
        if(n>m){
            m = n;
            p_max = p;
        }
    }
    cout << p_max << endl;
    return 0;
}

