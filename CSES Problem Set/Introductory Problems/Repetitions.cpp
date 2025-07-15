#include <bits/stdc++.h>
using namespace std;

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s;
        cin >> s;

        if(s.size()==1){
            cout << 1 << endl;
        }

        int subslen = 1;
        set<int> lenset;

        for(long unsigned int i=0; i<s.size()-1; i++){
            char visited = s[i];
            if(visited == s[i+1]){
                visited = s[i+1];
                subslen++;
            }
            else{
                subslen = 1;
            }

            lenset.insert(subslen);
        }

        if (!lenset.empty()) {
            int maxElement = *--lenset.end();
            cout << maxElement << endl;
        }

        return 0;
}
