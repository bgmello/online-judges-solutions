#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin >> n;
for (int r=1;r<=n;r++){
int j=0;
bool certo = true;
string s, t;
cin >> s >> t;
if (t.length()>s.length())certo = false;
else if (t != s.substr(s.length()-t.length(), s.length()))certo = false;
if (certo) cout << "encaixa" << endl;
else cout << "nao encaixa" << endl;}
return 0;
}
