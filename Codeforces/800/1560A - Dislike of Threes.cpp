#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int k, j=0;
    cin >> k;
    for(int i=1; i<= 1666; i++){
      if(i%10==3 or i%3==0){
        continue;
      }
      else{
        ++j;
        if(j==k){
          cout << i << endl;
          break;
        }
      }
    }
  }
  return 0;
}
