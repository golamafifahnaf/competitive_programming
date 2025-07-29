#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
      long int n;
      cin >> n;

      vector<long int> a(n);

      int total = 0;

      for(long int i=0; i<n; i++){
          cin >> a[i];

          if(a[i]%2!=0) total++;
      }

      cout << total << endl;
    }

    return 0;
}
