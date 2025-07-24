#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d = n%10;
        while(n>0){
            int rem = n%10;
            if(rem<d) d = rem;
            n/=10;
        }
        cout << d << endl;
    }
    return 0;
}
