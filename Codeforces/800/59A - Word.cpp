#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int count = 0;

    for(char &x : s){
      if(isupper(x)) count++;
    }

    if(count > (s.size() - count)){
      transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
      transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
    return 0;
}
