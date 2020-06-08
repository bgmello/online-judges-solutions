#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e6+5;

int main(){

  int n, k, arr[N];
  scanf("%d", &n);
  scanf("%d", &k);
  for(int i=1;i<=n;i++)arr[i]=1;

  int ans=0, tmp=0;
  for(int j=1;j<=k;j++){
    int i;
    scanf("%d", &i);
    for(int r=i;r<=n;r+=i){
      if(arr[r])arr[r]=0, tmp++;
      else arr[r]=1, tmp--;
    }
    ans = max(ans, tmp);
  }
  printf("%d\n", ans);
  return 0;
}

