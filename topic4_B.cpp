#include <bits/stdc++.h>
using namespace std;

int main(){
  cout << fixed << setprecision(12);

  double  r;
  cin>>r;

  double PI = acos(-1);
  double area = r * r * PI;
  double cir = (r + r) * PI;
  cout<<area<<" "<<cir<<endl;

  return 0;
}
