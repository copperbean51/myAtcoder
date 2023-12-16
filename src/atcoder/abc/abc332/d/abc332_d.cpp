#include <iostream>
#include <algorithm>
using namespace std;
const int inf = 1000000000;
int main(void)
{
  int h, w, a[6][6], b[6][6];
  cin >> h >> w;
  for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) cin >> a[i][j];
  for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) cin >> b[i][j];
  
  int p[6], q[6];
  for(int i = 1; i <= h; i++) p[i] = i;
  for(int i = 1; i <= w; i++) q[i] = i;
  
  int ans = inf;
  do{
    do{
      
      bool match = true;
      for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++){
        if(a[p[i]][q[j]] != b[i][j]) match = false;
      }
      if(!match) continue;
      
      int pinv = 0, qinv = 0;
      for(int i = 1; i <= h; i++) for(int j = 1; j <= h; j++) if(i < j && p[i] > p[j]) pinv++;
      for(int i = 1; i <= w; i++) for(int j = 1; j <= w; j++) if(i < j && q[i] > q[j]) qinv++;
      ans = min(ans, pinv+qinv);
      
    }while(next_permutation(q+1, q+w+1));
  }while(next_permutation(p+1, p+h+1));
  
  if(ans == inf) cout << -1 << endl;
  else cout << ans << endl;
  
  return 0;
}
