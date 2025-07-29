#include <bits/stdc++.h>
using namespace std;

bool isEqual(string s){
  return s=="ACE" or s=="BDF" or s=="CEG" or s=="DFA" or s=="EGB" or s=="FAC" or s=="GBD";
}

int main()
{
    string s;
    cin >> s;

    if(isEqual(s)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
