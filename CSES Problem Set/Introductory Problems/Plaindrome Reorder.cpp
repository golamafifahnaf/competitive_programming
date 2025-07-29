#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> freq(26, 0);

    for(int i=0; i<n; i++){
      freq[s[i] - 'A']++;
    }

    if(n%2==0){
      bool possible = true;
      for(int i=0; i<26; i++){
        if(freq[i] > 0 and freq[i]%2 != 0){
          possible = false;
          break;
        }
      }

      if(!possible) cout << "NO SOLUTION" << endl;
      else{
        for(int i=0; i<26; i++){
          for(int j=0; j<freq[i]/2; j++){
            char ch = (char) i + 'A';
            cout << ch;
          }
        }

        for(int i=25; i>=0; i--){
          for(int j=0; j<freq[i]/2; j++){
            char ch = (char) i + 'A';
            cout << ch;
          }
        }

        cout << endl;
      }
    }

    else{
      int odd = 0, oddidx;
      bool possible = true;
      for(int i=0; i<26; i++){
        if(freq[i] > 0 and freq[i]%2 != 0){
          odd++;
          if(odd>1){
            possible = false;
            break;
          }
          oddidx = i;
        }
      }

      if(!possible) cout << "NO SOLUTION" << endl;
      else{
        for(int i=0; i<26; i++){
          if(i != oddidx){
            for(int j=0; j<freq[i]/2; j++){
              char ch = (char) i + 'A';
              cout << ch;
            }
          }
        }

        for(int j=0; j<freq[oddidx]; j++){
          char ch = (char) oddidx + 'A';
          cout << ch;
        }

        for(int i=25; i>=0; i--){
          if(i != oddidx){
            for(int j=0; j<freq[i]/2; j++){
              char ch = (char) i + 'A';
              cout << ch;
            }
          }
        }

        cout << endl;
      }
    }

    return 0;
}
