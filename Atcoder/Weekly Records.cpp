#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> steps(n*7), week;


    int total=0, count = 0;

    for(int i=0; i<n*7; i++){
      cin >> steps[i];
      total++;
      count += steps[i];
      if(total == 7){
        total = 0;
        week.push_back(count);
        count = 0;
      }
    }

    for(int s : week){
      cout << s << " ";
    }
    cout << endl;

    return 0;
}
