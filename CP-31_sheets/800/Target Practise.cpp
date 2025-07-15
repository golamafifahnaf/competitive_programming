#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
      int count = 0;
      for(int i=1; i<=10; i++){
        string s;
        cin >> s;

        if(i==1 || i==10){
          for(int j=0; j<10; j++){
            if(s[j] == 'X'){
              count += 1;
            }
          }
        }

        if(i==2 || i==9){
          for(int j=0; j<10; j++){
            if(s[j] == 'X'){
              if(j==0 || j==9){
                count+=1;
              }
              else{
                count+=2;
              }
            }
          }
        }

        if(i==3 || i==8){
          for(int j=0; j<10; j++){
            if(s[j] == 'X'){
              if(j==0 || j==9){
                count+=1;
              }
              else if(j==1 || j==8){
                count+=2;
              }
              else{
                count+=3;
              }
            }
          }
        }

        if(i==4 || i==7){
          for(int j=0; j<10; j++){
            if(s[j] == 'X'){
              if(j==0 || j==9){
                count+=1;
              }
              else if(j==1 || j==8){
                count+=2;
              }
              else if(j==2 || j==7){
                count+=3;
              }
              else{
                count+=4;
              }
            }
          }
        }

        if(i==5 || i==6){
          for(int j=0; j<10; j++){
            if(s[j] == 'X'){
              if(j==0 || j==9){
                count+=1;
              }
              else if(j==1 || j==8){
                count+=2;
              }
              else if(j==2 || j==7){
                count+=3;
              }
              else if(j==3 || j==6){
                count+=4;
              }
              else{
                count+=5;
              }
            }
          }
        }


      }
      cout << count << "\n";
    }
    return 0;
}
