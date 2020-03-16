#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<int, vector<int>> posicao;
    for(int i=1;i<=n;i++){
        int a;  
        cin >> a;

        if(posicao.find(a)==posicao.end()){
          vector<int> tmp;
          tmp.push_back(i);
          posicao[a]=tmp;
        }
        else{
          posicao[a].push_back(i);
        }
    }

    bool ok=false;
    map<int, vector<int>>::iterator it;
    for(it=posicao.begin();it!=posicao.end();it++){
      int ant=(*it).second[0];
      for(int i=0;i<(*it).second.size();i++){
        if((*it).second[i]-ant>1)ok=true;
      }
    }
    if(ok)cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}

