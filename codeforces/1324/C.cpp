#include<bits/stdc++.h> 
#define pii pair<int,int> 
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

string s;

bool isPossible(int d){
  int ans=-1;
  for(int i=0;i<s.size();i++){
    if(s[i]=='R' and (i-ans)<=d)ans=i;
    else if(s[i]=='R' and (i-ans)>d)return false;
  }
  if(ans==-1)return false;
  if((s.size()-ans)>d)return false;
  return true;
}

int binSearch(int ini, int fim){

  while(ini<fim){
    int mid=(ini+fim)/2;
    if(isPossible(mid))fim=mid;
    else ini=mid+1;
  }
  return fim;
}

int main(){

  int t;
  cin >> t;

  while(t--){
    cin >> s;
    cout << binSearch(0, s.size()+1) << endl;
  }

  return 0;
}

