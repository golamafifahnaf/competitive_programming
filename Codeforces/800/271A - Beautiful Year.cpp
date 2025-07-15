#include <bits/stdc++.h>
using namespace std;

int isBeautiful(int year){
  while(true){
    year++;
    int temp = year;
    unordered_set<int> digits;
    while (temp > 0){
      digits.insert(temp%10);
      temp/=10;
    }

    if(digits.size()==4){
      return year;
    }
  }
}

int main () {

  int year;
  cin >> year;
  if(year>=1987 and year<2013) cout << 2013;
  else cout << isBeautiful(year);

  return 0;
}
