#include <bits/stdc++.h>
using namespace std;

int main(){
  int W, H;
  cin>>W>>H;

  int x, y, r;
  cin>>x>>y>>r;

  if(x - r >= 0 && y - r >= 0 && x + r <= W && y + r <= H)
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
