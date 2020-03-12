#include <iostream>

using namespace std;
const int N=5e4+5;
int v[N],n;
int max_sum(){
  int resp=0,maior=0;
  for (int i=1;i<=n;i++){
    maior=max(0,maior+v[i]);
    resp=max(resp,maior);
  }
  return resp;
}
int main()
{
  cin >> n;
  for (int i=1;i<=n;i++){
    scanf("%d", &v[i]);
  }
  printf("%d\n", max_sum());

  return 0;
}

