#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

vector<int> sliceVec(vector<int> v, int pos, int size)
{
  vector<int> ans(size);
  for(int i=pos;i<pos+size;i++)ans[i-pos]=v[i];

  return ans;
}

ll joinNum(vector<int> v){
  vector<int>::reverse_iterator rit;

  int exp = 1;
  ll ans = 0;
  for(rit=v.rbegin();rit!=v.rend();rit++){
    ans+=(*rit)*exp;
    exp*=10;
  }
  return ans;
}

bool hasProperty(vector<int> v)
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

  vector<int> v = {0,1,2,3,4,5,6,7,8,9};
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

