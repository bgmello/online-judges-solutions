#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

string solve(ll  i) {
  ll s=ceil((sqrt(4*i+1)-2)/2);
  if (s%2==0)return "even";
  return "odd";

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++) {
    ll i;
    cin >> i;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = solve(i);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}
