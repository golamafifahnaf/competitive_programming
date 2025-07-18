#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    if(n%3==0){
        cout << 0 << endl;
    }
    else{
        int mn = n/3;
        int rem = n%3;
        if(rem%2==0){
            int mx = mn + (rem/2);
            cout << mx-mn <<  endl;
        }
        else{
            int mx = mn + rem;
            cout << mx-mn << endl;
        }
    }
    return 0;
}
