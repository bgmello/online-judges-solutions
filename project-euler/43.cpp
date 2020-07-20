#include<bits/stdc++.h>
#define pii pair<ll,ll>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const ll N=1e5+5;

vector<ll> sliceVec(vector<ll> v, ll pos, ll size)
{
  return {v.begin()+pos, v.begin()+pos+size};
}

ll joinNum(vector<ll> v){

  reverse(v.begin(), v.end());
  ll exp = 1;
  auto getDigit = [&exp](ll acc, ll x){
    ll ans = exp*x+acc;
    exp*=10;
    return ans;
  };
  return accumulate(v.begin(), v.end(), ll(0), getDigit);
}

bool hasProperty(vector<ll> v)
{
  bool ans = true;
  ans = ans and joinNum(sliceVec(v, 1, 3))%2==0;
  ans = ans and joinNum(sliceVec(v, 2, 3))%3==0;
  ans = ans and joinNum(sliceVec(v, 3, 3))%5==0;
  ans = ans and joinNum(sliceVec(v, 4, 3))%7==0;
  ans = ans and joinNum(sliceVec(v, 5, 3))%11==0;
  ans = ans and joinNum(sliceVec(v, 6, 3))%13==0;
  ans = ans and joinNum(sliceVec(v, 7, 3))%17==0;
  return ans;
}

int main(){

  vector<ll> v = {0,1,2,3,4,5,6,7,8,9};
  ll ans = 0;
  do{

    if(hasProperty(v))
    {
      ans += joinNum(v);
    }

  }while(next_permutation(v.begin(), v.end()));
  cout << ans << endl;
  return 0;
}

