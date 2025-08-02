#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s){
    int l = 0;
    int r = s.size()-1;

    while(l<r){
        if(s[l] != s[r]) return false;

        l++;
        r--;
    }

    return true;
}

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    for(int j=n; j>=1; j--){
        for(int i=0; i+j <= n; i++){
            string sub = s.substr(i, j);

            if(isPalindrome(sub)){
                cout << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
