#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){

  int n;
  cin >> n;
  double s_max=0, s_min=0;
  vector<double> maxs(n), mins(n);
  vector<string> names(n);
  for(int i=0;i<n;i++){
  
    double a;
    cin >> names[i];
    cin >> a;
    maxs[i] = min(a+0.49, (double)100);
    mins[i] = max(a-0.50, (double)0);
    s_max+=maxs[i];
    s_min+=mins[i];
  }
  if(s_max<100 or s_min>100){
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }
  for(int i=0;i<n;i++){
    cout << fixed;
    cout.precision(2);
    cout << names[i] << " ";
    cout << max(100-s_max+maxs[i], mins[i]) << " ";
    cout << min(100-s_min+mins[i], maxs[i]) << endl;
  }
  return 0;
}

