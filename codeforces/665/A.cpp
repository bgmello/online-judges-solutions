#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int a,ta;
  int b,tb;
  string s; 

  cin >> a >> ta;
  cin >> b >> tb;
  cin >> s;
  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2));
  int m_abs = m+60*h-5*60;
  int tot = 0;
  for(int i=0;i<=23*60+59-5*60;i+=b){
    if(i+tb>m_abs and i<m_abs+ta)tot++;
  }
  cout << tot << endl;
  return 0;
}

