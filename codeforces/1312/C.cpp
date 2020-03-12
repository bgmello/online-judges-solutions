#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=35, M=100, MAXEXP=54;

ll repres[N][M], u[M];
vector<ll> v;
ll powers[MAXEXP];

void generate_powers(int k, ll maxnum){
  for(int i=0;i<MAXEXP;i++){
    if(i==0)powers[i]=1;
    else powers[i]=powers[i-1]*k;
    if(powers[i]>maxnum)break;
  }
}

void representacao(ll k){
  for(int i=0;i<v.size();i++){
    ll pow=0;
    ll a=v[i];
    while(a!=0){
      pow=0;
      while(powers[pow]<=a)pow++;
      pow--;
      repres[i][pow]+=1;
      a-=powers[pow];
    }
  }
}

int main(){
  cin.tie(0), ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    ll maxnum=0;
    for(int i=1;i<=n;i++){
      ll a;
      cin >> a;
      v.push_back(a);
      maxnum=max(maxnum, a);
    }
    generate_powers(k, maxnum);
    bool ok=true;
    representacao(k);
    for(int i=0;i<n;i++){
      for(int j=0;j<M;j++){
        u[j]+=repres[i][j];
        if(u[j]>1 or repres[i][j]>1)ok=false;
      }
    }
    if(ok)cout << "YES" << endl;
    else cout << "NO" << endl;
    v.clear();
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
        repres[i][j]=0;
        u[j]=0;
      }
    }
  }
  return 0;
}

