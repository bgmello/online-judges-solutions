#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m; 
        if (n==1 or m==1){
            cout << "YES" << endl;
        }

        else if (n==2 and m==2){
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

