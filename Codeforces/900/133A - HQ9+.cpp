#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool possible = false;

    for(char c:s) if(c == 'H' or c == 'Q' or c == '9') possible = true;

    if(possible) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
