#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=1; i<=n-1; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=1; i<=n-1; i++){
        if(a[i] != i){
            cout << i;
            break;
        }
        else if(a[n-1] != n){
            cout << n;
            break;
        }
    }
    return 0;
}
