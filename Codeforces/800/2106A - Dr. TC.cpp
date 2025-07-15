#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int sum = 0;

        for(int i = 0; i < n; i++) {
            string temp = s;
            temp[i] = (temp[i] == '1') ? '0' : '1';

            sum += count(temp.begin(), temp.end(), '1');
        }

        cout << sum << "\n";
    }

    return 0;
}
