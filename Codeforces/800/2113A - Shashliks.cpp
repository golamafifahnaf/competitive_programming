#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
      long long int z, a, b, x, y;
      cin >> z >> a >> b >> x >> y;

      if(z<a && z<b){
        cout << 0 << endl;
      }

      else{
        long long int count, total = 0;

        if(x<y){
          if(z>=a){
            count = (z-a)/x + 1;
            total += count;
            z -= count*x;
          }
          if(z>=b){
            count = (z-b)/y + 1;
            total += count;
            z -= count*y;
          }
        }

        else{
          if(z>=b){
            count = (z-b)/y + 1;
            total += count;
            z -= count*y;
          }
          if(z>=a){
            count = (z-a)/x + 1;
            total += count;
            z -= count*x;
          }
        }

        cout << total << endl;
      }
    }
    return 0;
}
