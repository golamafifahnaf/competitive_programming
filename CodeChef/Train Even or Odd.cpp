#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    int oh = 0, eh = 0;
	    for(int i=1; i<=n; i++){
	        cin >> a[i];
	        if(i%2==0){
	            eh+=a[i];
	        }
	        else{
	            oh+=a[i];
	        }
	    }
	    cout << max(oh, eh) << "\n";
	}
	return 0;
}
