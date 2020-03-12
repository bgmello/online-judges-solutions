#include <stdio.h>
#include <bits/stdc++.h>

#define MAX 1000100

using namespace std;


int pilha[MAX], tam;

void pop(){
if (tam>0)tam--;
}

void push(int x){
pilha[++tam] = x;
}

void clear(){
tam = 0;
}

int top(){
return pilha[tam];
}

int main() {

int n;
while (true){
    cin >> n;
    if (n==0)break;
    while (true){
        clear();
        int itr = n;
        bool fim = false;
        int v[MAX];
        for (int i=0;i<n;i++){
            scanf("%d", &v[i]);
            if(v[i] == 0){
                fim = true;
                break;
            }

        }
        if (fim)break;
        for (int i=n-1;i>=0;i--){
        if (itr == v[i]){
            itr--;
            while(tam>0){
            if (top()==itr){pop();itr--;}
            else break;
}}
        else push(v[i]);
}
        while(tam!=0){
            if (top()==itr){pop();itr--;}
            else {break;}
        }
        if (tam==0)cout << "Yes" << endl;
        else cout << "No" << endl;
        }
        cout << endl;
    }


return 0;}

