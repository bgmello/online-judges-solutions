#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

vector<int> abundant;

bool is_abundant(int x){
    int sum = 0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum+=i;
        }
    }

    return sum>x;
}

int main(){

  for(int i=1;i<=28123;i++){
      if(is_abundant(i)){
          abundant.push_back(i);
      }
  }

  set<int> s;
  for(int i=1;i<=28123;i++){
      s.insert(i);
  }

  for(auto a: abundant){
      for(auto b: abundant){
          if(s.find(a+b)!=s.end()){
            s.erase(s.find(a+b));
          }
      }
  }

  set<int>::iterator it;
  int tot=0;
  for(it=s.begin();it!=s.end();it++){
      tot+=*it;
  }

  cout << tot << endl;
  return 0;
}

