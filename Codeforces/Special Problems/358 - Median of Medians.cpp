#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> r1(3), r2(3), r3(3);

    for(int &x:r1) cin >> x;
    for(int &y:r2) cin >> y;
    for(int &z:r3) cin >> z;

    sort(r1.begin(), r1.end());
    sort(r2.begin(), r2.end());
    sort(r3.begin(), r3.end());

    vector<int> res;

    res.push_back(r1[1]);
    res.push_back(r2[1]);
    res.push_back(r3[1]);

    sort(res.begin(), res.end());

    cout << res[1] << endl;

    return 0;
}
