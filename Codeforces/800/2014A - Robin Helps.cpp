#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, k;
      cin >> n >> k;
      int loot = 0;
      int count = 0;
      int a[n];
      for(int i = 1; i<=n; i++){
        cin >> a[i];
        if(a[i] >= k){
          loot += a[i];
        }
        if(a[i] == 0 && loot > 0){
          loot--;
          count++;
        }
      }
      cout << count << "\n";
    }
    return 0;
}
