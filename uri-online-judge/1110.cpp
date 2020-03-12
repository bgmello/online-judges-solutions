#include <stdio.h>
#include <bits/stdc++.h>

#define MAX 1000100

using namespace std;

int fila[MAX], ini=1, fim=0;

void pop(){
ini++;
}

int size(){
return fim-ini+1;
}

void push(int x){
fila[++fim] = x;
}

void clear(){
ini = 1;
fim = 0;
}

int front(){
return fila[ini];
}

int main(){

int n;
while(cin >> n && n!=0){
clear();
vector<int> discarded;
for (int i=1;i<=n;i++)push(i);
while(size()!=1){
    discarded.push_back(front());
    pop();
    push(front());
    pop();
}
cout << "Discarded cards:";
for (int i=0;i<discarded.size();i++){
    cout << " " << discarded[i];
    if(i<discarded.size()-1)cout << ",";
}
cout << endl;
cout << "Remaining card: " << front() << endl;
}

return 0;
}

