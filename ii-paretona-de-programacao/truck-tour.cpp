#include <bits/stdc++.h>

using namespace std;

int truckTour(vector<vector<int>> petrolpumps) {
  int n = petrolpumps.size();
  for(int i=0;i<n;i++){
    int totalGas=0;
    bool ok=true;
    for(int j=0;j<n;j++){
      totalGas+=petrolpumps[(i+j)%n][0];
      totalGas-=petrolpumps[(i+j)%n][1];
      if(totalGas<0){
        ok=false;
        break;
      }
    }
    if(ok)return i;
  }
  return n;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<vector<int>> petrolpumps(n);
  for (int petrolpumps_row_itr = 0; petrolpumps_row_itr < n; petrolpumps_row_itr++) {
    petrolpumps[petrolpumps_row_itr].resize(2);

    for (int petrolpumps_column_itr = 0; petrolpumps_column_itr < 2; petrolpumps_column_itr++) {
      cin >> petrolpumps[petrolpumps_row_itr][petrolpumps_column_itr];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  int result = truckTour(petrolpumps);

  fout << result << "\n";

  fout.close();

  return 0;
}
