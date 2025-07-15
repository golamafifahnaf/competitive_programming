#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int eff = 0;
        vector<int> a(n);
        for(int i=1; i<n; i++){
            cin >> a[i];
            eff+=a[i];
        }

        cout << (-1)*eff << "\n";
    }
    return 0;
}
