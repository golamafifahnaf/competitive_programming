#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, moves;
    for(int i=1; i<=5; i++){
      for(int j=1; j<=5; j++){
        cin >> x;
        if(x==1){
          moves=abs(i-3) + abs(j-3);
        }
      }
    }
    cout << moves << endl;
    return 0;
}
