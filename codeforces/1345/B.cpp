#include <bits/stdc++.h>
#define N (int)1e9+5
using namespace std;

vector<int> v;

int solve(int n)
{
    if(n == 1)return 2;
    return v[n-2] + (n - 1) * 3 + 2;
}

int main()
{

    
    for(int i = 1; i < 100000; i++)
    {
        v.push_back(solve(i));
    }

    int t;
    cin >> t;
    while(t--)
    {
        int n, num = 0;
        cin >> n;
        while(n > 1)
        {
            int i = 1;
            while(v[i - 1] <= n)
            {
                i++;
            }
            num++;
            n -= v[i - 2];
        }
        cout << num << endl;
    }
    return 0;
}