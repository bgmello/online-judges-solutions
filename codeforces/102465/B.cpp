#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

vector<pii> limits;
int n;


bool is_possible(int x){

  multiset<int> left, right;

  for(int i=0;i<n;i++){
    left.insert(limits[i].F);
    right.insert(limits[i].S);
    if(i>=x){
      if(left.find(limits[i-x].F)!=left.end()) left.erase(left.find(limits[i-x].F));
      if(right.find(limits[i-x].S)!=right.end()) right.erase(right.find(limits[i-x].S));
    }
    if(left.size()>=x and -*left.rbegin()+*right.begin()+1>=x)return true;
  }
  return false;
}

int search(){
  int ini=1, fim=n;
  while(ini<=fim){
    int mid = (ini+fim)/2;
    if(is_possible(mid)){
      ini = mid+1;
      if(not is_possible(mid+1))return mid;
    }
    else fim=mid; 
  }
  return ini;
}

int main(){

  cin >> n;
  for(int i=0;i<n;i++){
    pii a;
    cin >> a.F >> a.S;
    limits.pb(a);
  }
  cout << search() << endl;
  return 0;
}

