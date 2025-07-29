#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long x){
    if(x == 0){
      return true;
    }

    long long odd = 1;

	  while(x>0){
		  x -= odd;
		  odd += 2;
	  }
	  return x == 0;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
      long long n;
      cin >> n;
      vector<long long> a(n);
      long long total = 0;

      for(long long i=0; i<n; i++){
        cin >> a[i];
        total += a[i];
      }

      if(isSquare(total)) cout << "YES" << endl;
      else cout << "NO" << endl;
    }

    return 0;
}
