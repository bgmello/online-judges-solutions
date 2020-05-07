#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

tuple<int,int,int,int> operator+(pair<int,int> a, pair<int,int> b){
    if(a.F>b.F)swap(a,b);
    return make_tuple(a.first, a.second, b.first, b.second);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        pair<int,int> pos(0,0);
        set<tuple<int,int,int,int>> points;
        string s;
        cin >> s;
        pair<int,int> new_p;
        for(char c: s){
            new_p = pos;
            if(c=='N'){
                new_p.S+=1;
            }
            if(c=='S'){
                new_p.S-=1;
            }
            if(c=='E'){
                new_p.F+=1;
            }
            if(c=='W'){
                new_p.F-=1;
            }
            if(points.find(new_p+pos)==points.end() and points.find(pos+new_p)==points.end()){
                points.insert(pos+new_p);
            }
            
            pos = new_p;
        }
        cout << (points.size())*5+(s.size()-points.size()) << endl;
    }
    return 0;
}

