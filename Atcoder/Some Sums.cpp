#include <bits/stdc++.h>
using namespace std;

int digitsum(int x)
{
    int total = 0;

    while(x > 0){
        total += x%10;
        x /= 10;
    }

    return total;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int total = 0;

    for(int i=1; i<=n; i++){
        int x = digitsum(i);
        if(x>=a and x<=b) total += i;
    }

    cout << total << endl;

    return 0;
}
