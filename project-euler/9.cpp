#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;
const int N=1e5+5;

int main(){
  
  for(int a=1;a<1000;a++){
    for(int b=a+1;b<1000-a;b++){
      int c=1000-a-b;
      if(a*a+b*b==c*c){
        cout << a*b*c << endl;
        return 0;
      }
    }
  }
  return 0;
}

