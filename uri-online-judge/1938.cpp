#include <bits/stdc++.h>
using namespace std;

int x,y,N,ma,mi,r;
pair<int,int> p[3010];

int main(){
  scanf("%d", &N);
  for(int i=0;i<N;i++){
    scanf("%d %d", &x, &y);
    p[i]={x,y};
  }
  sort(p,p+N);
  for(int i=0;i<N-1;i++){
    ma=1e8+1;
    mi=-1e8-1;
    for(int j=i+1;j<N;j++){
      if(p[j].second<p[i].second){
        if(p[j].second>mi){
          r++;
          mi=p[j].second;
        }
      }
      else{
        if(p[j].second<ma){
          r++;
          ma=p[j].second;
        }
      }
    }
  }
  printf("%d\n", r);
  return 0;
}
