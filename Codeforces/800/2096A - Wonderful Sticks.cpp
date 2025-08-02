#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--){
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> a(n);

    int low = 1;
    int high = n;

    for(int i=n-2; i>=0; i--){
      if(low < high){
        if(s[i] == '<'){
          a[i+1] = low;
          low++;
        }
        else{
          a[i+1] = high;
          high--;
        }
      }
    }

    if(s[0] == '<') a[0] = a[1] + 1;
    else a[0] = a[1] - 1;

    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
  }

  return 0;
}
