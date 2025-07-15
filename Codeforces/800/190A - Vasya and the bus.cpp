#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, l, h;
    cin >> n >> m;
    if(n==0 && m!=0){
        cout << "Impossible" << "\n";
    }
    if(n>m && m!=0){
        l = n;
        h = n + m -1;
        cout << l << " " << h << "\n";
    }
    if(n==m && n>0 && m>0){
        l = n;
        h = n + m -1;
        cout << l << " " << h << "\n";
    }
    if(n<m && n!=0){
        l = m;
        h = n + m -1;
        cout << l << " " << h << "\n";
    }
    if(m==0){
        l = h = n;
        cout << l << " " << h << "\n";
    }
    return 0;
}
