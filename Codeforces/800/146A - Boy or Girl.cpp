#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> ns;

    for (int i=0; i < s.size(); i++){
      ns.insert(s[i]);
    }

    if(ns.size() % 2 != 0){
      cout << "IGNORE HIM!" << "\n";
    }
    else{
      cout << "CHAT WITH HER!" << "\n";
    }

    return 0;
}
