#include <bits/stdc++.h>
using namespace std;

const int a[10] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<10; i++){
            if(a[i]==n){
                cout << n << endl;
                break;
            }
            else if(a[i]>n){
                cout << a[i-1] <<  endl;
                break;
            }
        }
    }
    return 0;
}
