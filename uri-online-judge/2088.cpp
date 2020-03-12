#include<bits/stdc++.h>
#define N 16
#define MAXN (1<<16)+10
using namespace std;

struct point{
  int x,y;
};

float distance(point a, point b){
  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int n;
float dist[N][N], dp[MAXN][N];
point v[N];

float solve(int mask, int i){
  if(dp[mask][i]!=-1) return dp[mask][i];
  if(mask==((1<<(n+1))-1))return dp[mask][i]=dist[i][0];
  float ans = 1e9;
  for(int j=0;j<=n;j++){
    if(mask&(1<<j))continue;
    ans = min(ans, solve(mask|(1<<j),j)+dist[i][j]);
  }
  return dp[mask][i]=ans;
}

int main(){
  while(cin >> n && n!=0){
    cin >> v[0].x >> v[0].y;
    for(int i=1;i<=n;i++){
      cin >> v[i].x >> v[i].y;
    }
    for(int i=0;i<MAXN;i++){
      for(int j=0;j<N;j++){
        dp[i][j]=-1;
      }
    }
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
        dist[i][j] = distance(v[i], v[j]);
      }
    }
    cout << fixed;
    cout.precision(2);
    cout << solve(1, 0) << endl;
  }
  return 0;
}

