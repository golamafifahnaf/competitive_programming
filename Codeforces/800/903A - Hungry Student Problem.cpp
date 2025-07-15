#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int found = 0;
        if(x%3==0 || x%7==0){
          cout << "YES" << "\n";
        }
        else{
          for(int a=0; a<=x/3; a++){
              if((x-(3*a)) % 7 == 0){
                  found = 1;
                  break;
              }
          }

          if(found){
              cout << "YES" << "\n";
          }
          else{
              cout << "NO" << "\n";
          }
        }
    }

    return 0;
}
