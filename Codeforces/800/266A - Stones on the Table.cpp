#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count=0;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n-1; i++){
      if(s[i] == s[i+1]){
        count++;
      }
    }

    cout << count << endl;
    return 0;
}
