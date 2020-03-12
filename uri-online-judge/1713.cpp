#include <bits/stdc++.h>
#define N 105
#define M 10000
using namespace std;

int dist[N][N], resp[N][N];
int n,l;

void multi(){
  int temp[N][N];
  memset(temp, 0, sizeof(temp));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      for(int r=1;r<=n;r++){
        temp[i][j] += (dist[i][r]*dist[r][j])%M;
      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      dist[i][j]=(temp[i][j])%M;
    }
  }
}

int main(){
  while(cin >> n >> l){
    int s,t;
    cin >> s >> t;
    memset(resp, 0, sizeof(resp));
    memset(dist, 0, sizeof(dist));
    for(int i=1;i<=n;i++){
      for(int j=1;j<=4;j++){
        int a;
        cin >> a;
        dist[i][a]++;
      }
    }
    for(int i=1;i<=n;i++){
      resp[i][i]=1;
    }
    for(int i=0;i<31;i++){
      if((l&(1<<i))!=0){
        int temp[N][N];
        memset(temp, 0, sizeof(temp));
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
            for(int r=1;r<=n;r++){
              temp[i][j] += (resp[i][r]*dist[r][j])%M;
            }
          }
        }
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
            resp[i][j] = (temp[i][j])%M;
          }
        }
      }
      multi();
    }

    cout << resp[s][t]%M << endl;
  }

  return 0;
}
