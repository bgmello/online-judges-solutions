#include <bits/stdc++.h>

#define N (int)1e5+5

typedef long long ll;
using namespace std;

ll tot = 0;

int v[N];

void merge_sort(int ini, int fim){

if(ini==fim)return;

int mid = (ini+fim)/2;
merge_sort(ini, mid), merge_sort(mid+1, fim);

int j=mid+1;
int u[N], itr=0;

for(int i=ini;i<=mid;i++){
  while(v[j]<v[i] && j<=fim){
    u[itr++]=v[j];
    j++;
    tot+=(mid-i+1);
  }
  u[itr++]=v[i];
}
while(j<=fim){
  u[itr++]=v[j];
  j++;
}
for(int i=ini;i<=fim;i++)v[i]=u[i-ini];
}


int main(){

int n;
while(cin >> n and n!=0){

  for(int i=0;i<n;i++)cin >> v[i];
  tot=0;
  merge_sort(0, n-1);
  if(tot%2)cout << "Marcelo" << endl;
  else cout << "Carlos" << endl;
}

return 0;}

