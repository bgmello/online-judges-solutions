#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;
int estado[25][25][2500];
int maca[25][25][2500];
int n,m,t_max;

int dp(int x, int y, int t){
  if (x<=0 || x>n || y>m || y<=0 || t>t_max)return 0;
  if(estado[x][y][t]!=-1)return estado[x][y][t];
  int parado=0,tot=0;
  if (maca[x][y][t]==1)tot=1;
  parado=max(parado,dp(x+1,y,t+1));
  parado=max(parado,dp(x+1,y+1,t+1));
  parado=max(parado,dp(x+1,y-1,t+1));
  parado=max(parado,dp(x,y+1,t+1));
  parado=max(parado,dp(x,y-1,t+1));
  parado=max(parado,dp(x-1,y+1,t+1));
  parado=max(parado,dp(x-1,y-1,t+1));
  parado=max(parado,dp(x-1,y,t+1));
  parado=max(parado,dp(x,y,t+1));
  return estado[x][y][t]=parado+tot;
}


int main()
{
  int k;
  while(scanf("%d %d %d", &n, &m, &k) && n!=0){
    memset(estado,-1,sizeof(estado));
    memset(maca,0,sizeof(maca));
    int x,y,t;
    for (int i=1;i<=k;i++){
      scanf("%d %d %d", &x, &y, &t);
      maca[x][y][t]=1;
    }
    t_max=t;
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", dp(a,b,0));
  }
  return 0;
}

