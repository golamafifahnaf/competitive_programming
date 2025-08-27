#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n;
    cin >> n;

    vector<int> event(n);
    for(int i=0; i<n; i++) cin >> event[i];

    int police_available = 0;
    int untreated_crime = 0;

    for(int i=0; i<n; i++){
      if(event[i] == -1){
        if(police_available > 0) police_available--;
        else untreated_crime++;
      }
      else police_available += event[i];;
    }

    cout << untreated_crime << endl;

    return 0;
}
