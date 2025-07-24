#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, g, m;
    cin >> k >> g >> m;

    int glass=0, mug=0;
    for(int i=0; i<k; ++i){
        if(glass == g) {
            glass = 0;
        }
        else if(mug == 0){
            mug = m;
        }
        else{
            int transfer = min(g - glass, mug);
            glass += transfer;
            mug -= transfer;
        }
    }

    cout << glass << " " << mug << endl;
    return 0;
}
