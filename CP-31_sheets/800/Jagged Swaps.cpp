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
        int n, i;
        cin >> n;
        vector<int> a(n), b(n);
        for(i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        if(a==b){
            cout << "YES" << "\n";
        }
        else{
            bool changed = true;
            while(changed){
                changed = false;
                for(i=1; i<n-1; i++){
                    if(a[i-1] < a[i] && a[i] > a[i+1]){
                        swap(a[i], a[i+1]);
                        changed = true;
                    }
                }
            }

            if(a==b){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
