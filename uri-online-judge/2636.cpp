#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <complex.h>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{

  long long int n;
  while (scanf("%lld", &n) && n!=0)
  {
    long long int i,a=0,b=0,tot;
    tot=n;
    for (i=2; i*i<=n; i++)
    {
      if (n%i==0)
      {n/=i;
        if (a==0)
          a=i;
        else
        {
          b=i;
          break;
        }
      }
    }
    printf("%lld = %lld x %lld x %lld\n", tot, a, b, tot/a/b);
  }




  return 0;
}

