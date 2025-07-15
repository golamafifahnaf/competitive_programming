#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d, a, b;
    char gender;
    vector<int> male(367, 0), female(367, 0);
    cin >> n;

    while(n--){
        cin >> gender >> a >> b;
        for(d=a; d<=b; d++){
            if(gender == 'M'){
              male[d]++;
            }
            else{
              female[d]++;
            }
        }
    }

    int max_people = 0;
    for(d=1; d<=366; d++){
        int pairs = min(male[d], female[d]);
        max_people = max(max_people, 2*pairs);
    }

    cout << max_people << "\n";

    return 0;
}
