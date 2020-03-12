#include <bits/stdc++.h>

using namespace std;

int divisors(int n) {
  int count=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      count += i%2==0;
      count += (n/i)%2==0;
      if(i*i==n and i%2==0)count--;
    }
  }
  return count;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++) {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = divisors(n);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

