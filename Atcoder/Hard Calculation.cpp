#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a, b;
    cin >> a >> b;

    bool carry = false;
    while(a>0 or b>0){
        int digitA = a % 10;
        int digitB = b % 10;

        if(digitA + digitB >= 10){
            carry = true;
            break;
        }

        a /= 10;
        b /= 10;
    }

    if(carry) cout << "Hard"<< endl;
    else cout << "Easy" << endl;

    return 0;
}
