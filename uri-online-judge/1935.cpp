#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll N,b,n,hi,lo,l,c;

ll f(ll x){
ll y=b-N*N;
  y+=x*x;
  return y;
}

int main(){
  scanf("%lld %lld", &N, &b);
  hi=N;
  lo=0;
  n=(hi+lo)/2;
  while(hi>lo){
    if(f(n)>=0){
      if(f(n-1)<0)  break;
      hi=n;
    }
    else{
      if(f(n+1)>=0){
        n++;
        break;
      }
      lo=n+1;
    }
    n=(hi+lo)/2;
  }
  if(n==0){
    if(N&1){
      printf("%lld %lld\n", (N+1)/2, (N+1)/2);
      return 0;
    }
    printf("%lld %lld\n", N/2+1,N/2);
    return 0;
  }
  if((N-n)&1)  n++;
  b=f(n);
  l=(N-n)/2+1;
  c=(N-n)/2;
  if(b>n){
    b-=n;
    c+=n;
    if(b>n-1){
      b-=n-1;
      l+=n-1;
      if(b>n-1){
        b-=n-1;
        c-=n-1;
        l-=b;
      }
      else{
        c-=b;
      }
    }
    else{
      l+=b;
    }
  }
  else{
    c+=b;
  }
  printf("%lld %lld\n", l, c);
  return 0;
}
