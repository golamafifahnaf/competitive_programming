#include <bits/stdc++.h>
using namespace std;

int main () {

  int n, total = 0, note;
  cin >> n;

  while(n>0){
    if(n>=100){
      note = n/100;
      total += note;
      n -= 100*note;
    }
    else if(n>=20){
      note = n/20;
      total += note;
      n -= 20*note;
    }
    else if(n>=10){
      note = n/10;
      total += note;
      n -= 10*note;
    }
    else if(n>=5){
      note = n/5;
      total += note;
      n -= 5*note;
    }
    else{
      note = n;
      total += note;
      n -= note;
    }
  }

  cout << total;
}
