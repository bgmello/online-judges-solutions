#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int counter = -1;

int fib(int n){
counter++;
if (n==0 || n==1)return n;
return fib(n-1)+fib(n-2);
}

int main(){
int n, m;
scanf("%d", &n);
for (int i=0;i<n;i++){
    scanf("%d", &m);
    int f = fib(m);
    printf("fib(%d) = %d calls = %d\n", m, counter, f);
    counter = -1;
}
return 0;}

