#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    int maxfreq = 1;

    for(int i=1; i<s.size(); i++){
      if(s[i] == s[i-1]){
        maxfreq++;
      }
      else{
        freq[s[i-1] - 'a'] = max(freq[s[i-1]-'a'], maxfreq);
        maxfreq = 1;
      }
    }

    freq[s[n-1] - 'a'] = max(freq[s[n-1]-'a'], maxfreq);

    int substr = 0;

    for(int x : freq){
      substr += x;
    }

    cout << substr << endl;

    return 0;
}
