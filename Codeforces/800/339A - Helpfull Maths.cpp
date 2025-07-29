#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s.size() == 1){
      cout<< s << endl;
    }
    else{
      for(int i=0; i<s.size()-2; i+=2){
        for(int j=0; j<s.size()-2-i; j+=2){
          if((s[j]-'0') > (s[j+2]-'0')){
            swap(s[j], s[j+2]);
          }
        }
      }

      cout << s << endl;
    }

    return 0;
}
