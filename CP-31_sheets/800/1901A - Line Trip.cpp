#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, x, i;
        cin >> n >> x;
        vector<int> a(n);
        for(i=0; i<n; i++){
            cin >> a[i];
        }

        a.push_back(0);

        sort(a.begin(), a.end());

        int volume = 0;
        for(i=1; i<a.size(); i++){
            volume = max(volume, a[i] - a[i-1]);
        }

        volume = max(volume, 2 * (x - a.back()));
        cout << volume << "\n";
    }

    return 0;
}
