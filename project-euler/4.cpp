#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

typedef long long ll;

bool isPalindrome(int x){
  string s = to_string(x);
  for(int i=0;i<s.length();i++){
    if(s[i]!=s[s.length()-i-1])return false;
  }
  return true;
}

int main(){
  
  int maiornum=-1;
  for(int i=100;i<1000;i++){
    for(int j=100;j<1000;j++){
      if(isPalindrome(i*j) and i*j>maiornum)maiornum=i*j;
    }
  }
  cout << maiornum << endl;
  return 0;
}

