#include <bits/stdc++.h>
using namespace std;

void flip(vector<int> &a){
    sort(a.begin(), a.end());
}

int main()
{
    int n;;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    flip(a);

    for(int i=0; i<n; i++) cout << a[i]  << " ";
    cout << endl;

    return 0;
}
