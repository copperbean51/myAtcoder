#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,l;
  cin >> n >> l;
  int ok=0;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    if(a>=l){ok++;}
  }
  cout << ok << "\n";
  return 0;
}
