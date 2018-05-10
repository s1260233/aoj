#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int a, b;
    string op;
    cin>>a>>op>>b;

    int ans;
    if(op == "+") ans = a + b;
    if(op == "-") ans = a - b;
    if(op == "*") ans = a * b;
    if(op == "/") ans = a / b;
    if(op == "?") break;

    cout<<ans<<endl;
  }
  return 0;
}
    
