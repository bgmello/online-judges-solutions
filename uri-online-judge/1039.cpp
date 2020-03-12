#include<bits/stdc++.h>

using namespace std;

struct circulo{
  int x,y,r;
};

int main(){

  circulo flor, cacador;
  while(cin >> cacador.r >> cacador.x >> cacador.y){
    cin >> flor.r >> flor.x >> flor.y;
    if (cacador.r*cacador.r < (flor.x-cacador.x)*(flor.x-cacador.x)+(flor.y-cacador.y)*(flor.y-cacador.y)){
      cout << "MORTO" << endl;
      continue;
    }

    if (sqrt((flor.x-cacador.x)*(flor.x-cacador.x)+(flor.y-cacador.y)*(flor.y-cacador.y)) > (cacador.r-flor.r)){
      cout << "MORTO" << endl;
      continue;
    }
    cout << "RICO" << endl;
  }

  return 0;
}
