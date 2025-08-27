#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
      int n;
      cin >> n;

      string a;
      cin >> a;

      int m;
      cin >> m;

      string b, c;
      cin >> b;
      cin >> c;

      string output = a;

      for(int i=0; i<m; i++){
        if(c[i] == 'D') output += b[i];
        else output = b[i] + output;
      }

      cout << output << endl;
    }
    return 0;
}
