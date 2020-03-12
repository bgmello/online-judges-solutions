#include <bits/stdc++.h>

using namespace std;

struct point{
  int x,y,z;
  point (int x, int y, int z){this->x=x, this->y=y, this->z=z;}
  point operator+(point a){
    return point(x+a.x, y+a.y, z+a.z);
  }
  point operator-(point a){
    return point(x-a.x, y-a.y, z-a.z);
  }
  int operator*(point a){
    return x*a.x+y*a.y+z*a.z;
  }
  long double operator!(){
    return sqrt(x*x+y*y+z*z);
  }
};

vector<string> split_string(string);

// Complete the solve function below.
string solve(int r1, int r2, vector<int> position, vector<int> acceleration) {

  point r0 = point(position[0], position[1], position[2]);
  point a = point(acceleration[0], acceleration[1], acceleration[2]);

  long double norm = 0;
  if(r0*a>0 or !a==0 or !r0<(r1+r2))return "NO";
  norm+=(!r0)*(!r0);
  norm-=((r0*a)/(!a))*((r0*a)/(!a));
  if(norm < (r1+r2)*(r1+r2))return "YES";
  return "NO";
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    int r1, r2, x, y, z, ax, ay, az;
    vector<int> position(3), accleration(3);
    cin >> r1 >> r2;
    cin >> position[0] >> position[1] >> position[2];
    cin >> accleration[0] >> accleration[1] >> accleration[2];
    cin >> x >> y >> z;
    position[0]-=x;
    position[1]-=y;
    position[2]-=z;
    cin >> ax >> ay >> az;
    accleration[0]-=ax;
    accleration[1]-=ay;
    accleration[2]-=az;
    cout << solve(r1, r2, position, accleration) << endl;    
  }
  return 0;
}

