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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>b)swap(a,b);
        if(c>d)swap(c,d);
        if(b==d and a+c==d){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}

