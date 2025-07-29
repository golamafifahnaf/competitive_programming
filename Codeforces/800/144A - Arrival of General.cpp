#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> line(n);

    for(int i=0; i<n; i++){
      cin >> line[i];
    }

    int min_el=line[n-1], max_el=line[0];
    int mindex=n-1, maxdex=0;

    for(int i=1; i<n; i++){
      if(line[i]>max_el){
        max_el = line[i];
        maxdex=i;
      }

      if(line[n-i-1]<min_el){
        min_el = line[n-i-1];
        mindex=n-i-1;
      }
    }

    int total;

    if(maxdex > mindex){
      total = maxdex + (n - (mindex + 1) - 1);
    }
    else{
      total = maxdex + (n - (mindex + 1));
    }

    cout << total << endl;

    return 0;
}
