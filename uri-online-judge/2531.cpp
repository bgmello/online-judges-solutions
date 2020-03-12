#include <iostream>

using namespace std;
typedef long long ll;
const int N=1e6+5,inf=0x3f3f3f3f;
int v[N],st1[4*N],st2[4*N];
void updatemax(int n,int i,int j,int p,int val){
  if(i==j){
    v[i]=val;
    st1[n]=val;
  }
  else{
    if(p<=(i+j)/2){
      updatemax(2*n,i,(i+j)/2,p,val);
    }
    else{
      updatemax(2*n+1,(i+j)/2+1,j,p,val);
    }
    st1[n]=max(st1[2*n],st1[2*n+1]);
  }
}
void updatemin(int n,int i,int j,int p,int val){
  if(i==j){
    v[i]=val;
    st2[n]=val;
  }
  else{
    if(p<=(i+j)/2){
      updatemin(2*n,i,(i+j)/2,p,val);
    }
    else{
      updatemin(2*n+1,(i+j)/2+1,j,p,val);
    }
    st2[n]=min(st2[2*n],st2[2*n+1]);
  }
}

int querymax(int n,int i,int j,int a,int b){
  if(i>=a && j<=b)return st1[n];
  if(i>b || j<a)return -inf;
  return max(querymax(2*n,i,(i+j)/2,a,b),querymax(2*n+1,(i+j)/2+1,j,a,b));
}
int querymin(int n,int i,int j,int a,int b){
  if(i>=a && j<=b)return st2[n];
  if(i>b || j<a)return inf;
  return min(querymin(2*n,i,(i+j)/2,a,b),querymin(2*n+1,(i+j)/2+1,j,a,b));
}

int main()
{
  int n;
  while(scanf("%d", &n)!=EOF){
    for (int i=1;i<=n;i++){
      scanf("%d", &v[i]);
      updatemax(1,1,n,i,v[i]);
      updatemin(1,1,n,i,v[i]);
    }
    int q;
    scanf("%d", &q);
    for (int i=1;i<=q;i++){
      int r;
      scanf("%d", &r);
      if(r==1){
        int a,b;
        scanf("%d %d", &a, &b);
        updatemax(1,1,n,a,b);
        updatemin(1,1,n,a,b);
      }
      else {
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n", querymax(1,1,n,a,b)-querymin(1,1,n,a,b));
      }
    }
  }
  return 0;
}

