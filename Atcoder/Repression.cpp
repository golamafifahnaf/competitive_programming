#include <bits/stdc++.h>
using namespace std;

int max_sum(int a, int b, int c){
  priority_queue<int> maxel;
  maxel.push(a);
  maxel.push(b);
  maxel.push(c);

  int max1 = maxel.top();
  maxel.pop();
  int max2 = maxel.top();
  maxel.pop();

  return max1 + max2;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = max_sum(a,b,c);

    cout << res << endl;

    return 0;
}
