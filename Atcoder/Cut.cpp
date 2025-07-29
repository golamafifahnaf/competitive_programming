#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    queue<long int> a;

    int x;

    for(int i=0; i<n; i++){
      cin >> x;
      a.push(x);
    }

    for(int i=0; i<n-k; i++){
      int y = a.front();
      a.pop();
      a.push(y);
    }

    while(!a.empty()){
      cout << a.front() << " ";
      a.pop();
    }
    cout << endl;

    return 0;
}
