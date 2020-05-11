#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int size_cycle(int n)
{
    set<int> decimals;
    int rem = 1;
    string d;
    int carry = -1;
    while(rem!=0){

        rem *= 10;
        carry = int(rem/n);

        
        d += ('0'+carry);
        
        rem = rem%n;

        if(decimals.find(rem)!=decimals.end()) break;
        
        decimals.insert(rem);
    }

    if(rem==0) return 0;

    return d.size() - d.find_first_of('0'+carry);
}

int main(){

    int maxidx = -1, max_ = 0;
    for(int i=2;i<1000;i++){
        int size = size_cycle(i);
        if(size>=max_){
            max_= size;
            maxidx = i;
        }

    }

    cout << maxidx << endl;
    return 0;
}

