#include <bits/stdc++.h>

#define N (int)1e4+5

using namespace std;
struct point{
  double x,y;
};


double dist(point a, point b){
  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(){

  int n;
  while(cin >> n && n!=0){
    point v[N];
    for(int i=0;i<n;i++){
      cin >> v[i].x >> v[i].y;
    }
    double minDist = 10000;
    for(int i=0;i<n;i++)
      for(int j=0;j<i;j++)
        minDist = min(minDist, dist(v[i],v[j]));
    cout << fixed;
    cout << setprecision(4);
    minDist == 10000 ? cout << "INFINITY" << endl : cout << minDist << endl;
  }

  return 0;
}

