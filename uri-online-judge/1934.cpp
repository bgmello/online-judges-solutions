#include <bits/stdc++.h>

#define N 105

using namespace std;

int M[N][N];
map<string,int> ind;
map<int,int> sol;
int l,c,itr=1, L[N], C[N];
vector<string> variables;

int colHasOnlyOne(int c){
  int var=0;
  for(int i=1;i<=l;i++){
    if(sol.find(M[i][c])==sol.end()){
      if(var==0)var=M[i][c];
      else if(var!=M[i][c])return 0;
    }
  }
  return var;
}


int linHasOnlyOne(int l){
  int var=0;
  for(int i=1;i<=c;i++){
    if(sol.find(M[l][i])==sol.end()){
      if(var==0)var=M[l][i];
      else if(var!=M[l][i])return 0;
    }
  }
  return var;
}

int main(){
  cin >> l >> c;
  for(int i=1;i<=l;i++){
    for(int j=1;j<=c;j++){
      string s;
      cin >> s;
      if(ind.find(s)==ind.end()){
        ind[s]=itr++;
        variables.push_back(s);
      }
      M[i][j]=ind[s];
    }
    cin >> L[i];
  }
  for(int i=1;i<=c;i++)cin >> C[i];
  while(itr!=1){
    for(int i=1;i<=l;i++){
      int var = linHasOnlyOne(i);
      if(var!=0){
        itr--;
        int num = 0, tot=0;
        for(int j=1;j<=c;j++){
          if(M[i][j]==var)num++;  
          else tot+=sol[M[i][j]];
        }
        sol[var] = (L[i]-tot)/num;
      }
    }
    for(int i=1;i<=c;i++){
      int var = colHasOnlyOne(i);
      if(var!=0){
        itr--;
        int num = 0, tot=0;
        for(int j=1;j<=l;j++){
          if(M[j][i]==var)num++;
          else tot+=sol[M[j][i]];
        }
        sol[var] = (C[i]-tot)/num;
      }
    }
  }

  sort(variables.begin(), variables.end());
  for(auto s : variables)cout << s << " " << sol[ind[s]] << endl;

  return 0;
}
